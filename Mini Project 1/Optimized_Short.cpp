/*
Note: AVX2 is required.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <immintrin.h>
#include <stdint.h>

using namespace std;

template <class T>
class Matrix
{
private:
    double **MATRIX;
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
        MATRIX = (double **)malloc(COL * sizeof(double *));
        double **begin = MATRIX;
        double **end = MATRIX + COL;
        while (begin != end)
        {
            // Allocate the memory for the matrix. No init val.
            *(begin++) = (double *)malloc(ROW * sizeof(double));
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
        MATRIX = (double **)malloc(COL * sizeof(int *));
        double **begin = MATRIX;
        double **end = MATRIX + COL;
        double *p1, *p2;

        while (begin != end)
        {
            p1 = *(begin++) = (double *)malloc(ROW * sizeof(double));
            p2 = p1 + ROW;
            while (p1 != p2)
            {
                // Assign the init_val to each entry of the matrix.
                *(p1++) = init_val;
            }
        }
    }

    // Operator to access the certain entry in the matrix.
    double &operator()(size_t i, size_t j)
    {
        return MATRIX[j][i];
    }

    // Operator to access the certain entry in the matrix.
    double operator()(size_t i, size_t j) const
    {
        return MATRIX[j][i];
    }

    // SIMD matrix multiplication.
    void multiply_kernel(double **result, double **a, double **b, int row, int col)
    {
        __m256d t0, t1, t2, t3, t4, t5, t6, t7,
            a0, a1, b0, b1, b2, b3;
        t0 = t1 = t2 = t3 = t4 = t5 = t6 = t7 = _mm256_set1_pd(0);
        double *pointer0_b(b[col]), *pointer1_b(b[col + 1]),
            *pointer2_b(b[col + 2]), *pointer3_b(b[col + 3]),
            *pointer0_a(a[0]), *pointer1_a(a[1]), *end = pointer0_b + COL;
        while (pointer0_b != end)
        {
            a0 = _mm256_loadu_pd(pointer0_a);
            a1 = _mm256_loadu_pd(pointer1_a);
            b0 = _mm256_set1_pd(*(pointer0_b++));
            b1 = _mm256_set1_pd(*(pointer1_b++));
            b2 = _mm256_set1_pd(*(pointer2_b++));
            b3 = _mm256_set1_pd(*(pointer3_b++));
            t0 += a0 * b0;
            t1 += a0 * b1;
            t2 += a0 * b2;
            t3 += a0 * b3;
            t4 += a1 * b0;
            t5 += a1 * b1;
            t6 += a1 * b2;
            t7 += a1 * b3;
            pointer0_a += 4;
            pointer1_a += 4;
        }
        _mm256_storeu_pd(&result[col][row], t0);
        _mm256_storeu_pd(&result[col + 1][row], t1);
        _mm256_storeu_pd(&result[col + 2][row], t2);
        _mm256_storeu_pd(&result[col + 3][row], t3);
        _mm256_storeu_pd(&result[col][row + 4], t4);
        _mm256_storeu_pd(&result[col + 1][row + 4], t5);
        _mm256_storeu_pd(&result[col + 2][row + 4], t6);
        _mm256_storeu_pd(&result[col + 3][row + 4], t7);
    }

    // Cache access optimization.
    Matrix multiply(const Matrix &B)
    {
        if (COL != B.ROW)
        {
            // Ensure that the number of columns in the first matrix is
            // equal to the number of rows in the second matrix.
            return *this;
        }
        Matrix result(ROW, B.COL, 0); // Initialize the result matrix.
        double *temp[2];
        temp[0] = (double *)malloc(sizeof(double) * 4 * COL);
        temp[1] = (double *)malloc(sizeof(double) * 4 * COL);
        int i = 0, j = 0, k, t;
        while (j < ROW)
        {
            k = 0;
            i = 0;
            while (i < COL)
            {
                temp[0][k] = MATRIX[i][j];
                temp[1][k++] = MATRIX[i][j + 4];
                temp[0][k] = MATRIX[i][j + 1];
                temp[1][k++] = MATRIX[i][j + 5];
                temp[0][k] = MATRIX[i][j + 2];
                temp[1][k++] = MATRIX[i][j + 6];
                temp[0][k] = MATRIX[i][j + 3];
                temp[1][k++] = MATRIX[i++][j + 7];
            }
            i = 0;
            while (i < B.COL)
            {
                multiply_kernel(result.MATRIX, temp, B.MATRIX, j, i);
                i += 4;
            }
            j += 8;
        }
        free(temp[0]);
        free(temp[1]);
        return result;
    }
};

int main()
{
    cout << "Size: " << sizeof(short) << endl;
    array<int, 10> test = {1000, 2000, 3000, 4000, 5000,
                           6000, 7000, 8000, 9000, 10000};
    cout << "Optimized, AVX2 required" << endl;
    cout << "Test Size: " << endl;
    for (auto it = test.begin(); it != test.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i] << ": ";
        Matrix<short> A(test[i], test[i], 1.0);
        Matrix<short> B(test[i], test[i], 1.0);
        clock_t start = clock();
        A.multiply(B);
        clock_t end = clock();
        double time_duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        cout << time_duration << "s" << endl;
    }
    std::cout << "Done" << std::endl;
}
