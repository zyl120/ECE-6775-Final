#include <iostream>
#include <immintrin.h>
#include <cstdlib>
#include <string>
#include <fstream>
#include<sstream>
#include<vector>
#include<ctime>

#define uint unsigned int
using namespace std;

template <class T>
class alignas(32)Mat{
private:
    size_t _row, _col;
    T **_mat;

public:
    Mat():_mat(NULL),_row(0),_col(0){}

    Mat(size_t row, size_t col, T init):_row(row), _col(col){
        _mat = new T*[row];
        for(int i=0; i<row; i++){
            _mat[i]=new T[col];
            for(int j=0; j<col; j++){
                _mat[i][j]=init;
            }
        }
    }

    Mat(vector<vector<T>> vec){
        if(vec.size()<1) throw "row less than 1";
        _mat = new T*[vec.size()];
        for(int i=0;i<vec.size();i++){
            _mat[i] = new T[vec[0].size()];
            for(int j=0; j<vec[0].size();j++){
                _mat[i][j]=vec[i][j];
            }
        }
        _row=vec.size();
        _col=vec[0].size();
    }

    Mat(const Mat<T> &B){
        _mat = new T*[B._row];
        for(int i=0; i<B._row; i++){
            _mat[i]=new T[B._col];
            for(int j=0; j<B._col; j++){
                _mat[i][j]=B._mat[i][j];
            }
        }
        _row=B._row;
        _col=B._col;
    }

    ~Mat(){
        if(!_mat) return;
        for(int i=0; i<_row; i++)
            delete _mat[i];
        delete _mat;
    }

    T& operator()(size_t row, size_t col){
        return _mat[row][col];
    }

    Mat<T>& operator=(Mat<T> B){
        if(_mat){
            throw "not empty";
        }
        _mat = B._mat;
        _row = B._row;
        _col = B._col;
        B._mat=NULL;
        return *this;
    }

    void print(){
        for(int i=0;i<_row;i++){
            cout << endl;
            for(int j=0; j<_col; j++) {
                cout << _mat[i][j] << "\t";
            }
        }
        cout << endl;
    }

    Mat<T> raw_mul(Mat<T> B){
        if(_col!=B._row){
            throw "can not multiply because shapes do not match";
        }
        Mat<T> result(_row, B._col, 0);
        for(int i=0; i<_row; i++){
            for(int j=0; j<B._col; j++){
                for(int k=0; k<_col; k++){
                    result(i,j)+=_mat[i][k]*B._mat[k][j];
                }
            }
        }
        return result;
    }

    Mat<int16_t> operator*(const Mat<int16_t>& B){
        Mat<int16_t> C(_row,B._col,0);
        for(int i=0; i<_row; i++){
            for(int k=0; k<_col; k++){
                int j;
                for(j=0; j<B._col; j+=16){
                    __m256i scale= _mm256_set1_epi16 (_mat[i][k]);
                    __m256i B_row=_mm256_loadu_si256((__m256i_u*)&B._mat[k][j]);
                    __m256i product = _mm256_mullo_epi16(scale, B_row);
                    __m256i C_row=_mm256_loadu_si256((__m256i_u*)&C._mat[i][j]);
                    __m256i sum = _mm256_add_epi16(product, C_row);
                    int16_t p[16];
                    _mm256_storeu_si256 ((__m256i_u*)p, sum);
                    for(int q=0;q<16&&q+j<B._col;q++){
                        C._mat[i][q+j]=p[q];
                    }
                }
            }
        }
        return C;
    }

    Mat<float> operator*(const Mat<float> B){
        Mat<float> C(_row,B._col,0);
        int i=0;
        do{
            int k=0;
            do{
                int j=0;
                do{
                    __m256 scale= _mm256_set1_ps (_mat[i][k]);
                    __m256 B_row=_mm256_loadu_ps(&B._mat[k][j]);
                    __m256 product = _mm256_mul_ps(scale, B_row);
                    __m256 C_row=_mm256_loadu_ps(&C._mat[i][j]);
                    __m256 sum = _mm256_add_ps(product, C_row);
                    _mm256_storeu_ps (&C._mat[i][j], sum);
                    j+=8;
                }while(j<B._col);
                k++;
            }while(k<_col);
            i++;
        }while(i<_row);
        return C;
    }

};

void assign_element(Mat<int16_t>& matrix, int row, int col, const vector<vector<int16_t>>& vec){
    matrix(row,col)=vec[row][col];
}

void assign_element(Mat<float>& matrix, int row, int col, const vector<vector<float>>& vec){
    matrix(row,col)=vec[row][col];
}

template<class T> void read_to_mat(string filename, Mat<T>& a, Mat<T>& b){
    ifstream file(filename,ios::in|ios::binary);
    if(!file.is_open()) return;
    vector<vector<T>> raw_mat_a;
    vector<vector<T>> raw_mat_b;
    string line;
    while(getline(file, line)){
        line.erase(line.find_last_not_of("\r") + 1);
        if(line=="") break;
        stringstream line_stream(line);
        T element;
        vector<T> row_vec;
        while(line_stream >> element){
            row_vec.push_back(element);
        }
        raw_mat_a.push_back(row_vec);
    }

    while(getline(file, line)){
        line.erase(line.find_last_not_of("\r") + 1);
        if(line=="") break;
        stringstream line_stream(line);
        T element;
        vector<T> row_vec={};
        while(line_stream >> element){
            row_vec.push_back(element);
        }
        raw_mat_b.push_back(row_vec);
    }

    a=Mat<T>(raw_mat_a.size(),raw_mat_a[0].size(),0);
    for(int i=0; i<raw_mat_a.size();i++){
        for(int j=0; j<raw_mat_a[0].size(); j++){
            assign_element(a, i, j, raw_mat_a);
        }
    }

    b=Mat<T>(raw_mat_b.size(),raw_mat_b[0].size(),0);
    for(int i=0; i<raw_mat_b.size();i++){
        for(int j=0; j<raw_mat_b[0].size(); j++){
            assign_element(b, i, j, raw_mat_b);
        }
    }
}

int main() {
    /*
    Mat<int> a(2,3,3);
    a.print();
    Mat<int> b(3,2,5);
    b.print();
    a.raw_mul(b).print();*/

    Mat<int16_t> a;
    Mat<int16_t> b;
    read_to_mat("test.txt",a,b);
    a.print();
    b.print();
    //a.raw_mul(b).print();
    Mat<int16_t> c = a*b;
    c.print();

    for(int i=1000;i<=5000;i+=1000){
        Mat<float> a(i,i,1);
        Mat<float> b(i,i,1);
        time_t start = clock();
        Mat<float> c=a*b;
        time_t end = clock();
        cout << i << " " <<double(end -start)/CLOCKS_PER_SEC <<endl;
    }

    return 0;
}
