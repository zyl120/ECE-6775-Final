#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

template <class T>
class Matrix
{
private:
    T **MATRIX;
    size_t ROW, COL;

public:
    // The default constructor.
    Matrix()
    {
        MATRIX = nullptr;
        ROW = 0;
        COL = 0;
    }

    // The constructor without initial value.
    Matrix(size_t row, size_t col)
    {
        ROW = row;
        COL = col;
        if (!ROW || !COL)
        {
            // Case when row or column is 0, invalid matrix.
            return;
        }
        MATRIX = (T **)malloc(COL * sizeof(T *));
        T **begin = MATRIX;
        T **end = MATRIX + COL;
        while (begin != end)
        {
            // Allocate the memory for the matrix. No init val.
            *(begin++) = (T *)malloc(ROW * sizeof(T));
        }
    }

    // The constructor with initial value.
    Matrix(size_t row, size_t col, const T init_val)
    {
        ROW = row;
        COL = col;
        if (!ROW || !COL)
        {
            return;
        }
        MATRIX = (T **)malloc(COL * sizeof(T *));
        T **begin = MATRIX;
        T **end = MATRIX + COL;
        T *p1, *p2;

        while (begin != end)
        {
            p1 = *(begin++) = (T *)malloc(ROW * sizeof(T));
            p2 = p1 + ROW;
            while (p1 != p2)
            {
                // Assign the init_val to each entry of the matrix.
                *(p1++) = init_val;
            }
        }
    }

    // Operator to access the certain entry in the matrix.
    T &operator()(size_t i, size_t j)
    {
        return MATRIX[j][i];
    }

    // Operator to access the certain entry in the matrix.
    T operator()(size_t i, size_t j) const
    {
        return MATRIX[j][i];
    }

    // The function to calculate the matrix product.
    Matrix multiply(const Matrix &B)
    { 
        if (COL != B.ROW)
        {
            // Ensure that the number of columns in the first matrix is
            // equal to the number of rows in the second matrix.
            return *this;
        }
        Matrix result(ROW, B.COL, 0); // Initialize the result matrix.
        int i, j=0, k;
        while (j < B.COL)
        {
            i = 0;
            while (i < ROW)
            {
                k = 0;
                while (k < COL)
                {
                    result(i, j) += (*this)(i, k) * B(k, j);
                    k++;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};

int main()
{
    cout << "Size: " << sizeof(short) << endl;
    array<int, 10> test = {10};
    cout << "Traditional, no SIMD" << endl;
    cout << "Test Size: " << endl;
    for (auto it = test.begin(); it != test.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i] << ": ";
        Matrix<short> A(test[i], test[i], 1);
        Matrix<short> B(test[i], test[i], 1);
        clock_t start = clock();
        A.multiply(B);
        clock_t end = clock();
        double time_duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        cout << time_duration << "s" << endl;
    }
    std::cout << "Done" << std::endl;
}
