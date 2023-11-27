#include <arm_neon.h>

#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

template <class T>
class Matrix {
   private:
    T **MATRIX;
    size_t ROW, COL;

   public:
    // Default constructor.
    Matrix() : MATRIX(nullptr), ROW(0), COL(0) {}

    // Constructor without initial value.
    Matrix(size_t row, size_t col) : ROW(row), COL(col) {
        if (!ROW || !COL) {
            MATRIX = nullptr;
            return;
        }
        MATRIX = (T **)malloc(COL * sizeof(T *));
        for (size_t i = 0; i < COL; ++i) {
            MATRIX[i] = (T *)malloc(ROW * sizeof(T));
        }
    }

    // Constructor with initial value.
    Matrix(size_t row, size_t col, const T init_val) : ROW(row), COL(col) {
        if (!ROW || !COL) {
            MATRIX = nullptr;
            return;
        }
        MATRIX = (T **)malloc(COL * sizeof(T *));
        for (size_t i = 0; i < COL; ++i) {
            MATRIX[i] = (T *)malloc(ROW * sizeof(T));
            for (size_t j = 0; j < ROW; ++j) {
                MATRIX[i][j] = init_val;
            }
        }
    }

    // Destructor.
    ~Matrix() {
        for (size_t i = 0; i < COL; ++i) {
            free(MATRIX[i]);
        }
        free(MATRIX);
    }

    // Access operators.
    T &operator()(size_t i, size_t j) {
        return MATRIX[j][i];
    }

    T operator()(size_t i, size_t j) const {
        return MATRIX[j][i];
    }

    // SIMD matrix multiplication using NEON for short data type.
    Matrix multiply(const Matrix &B) {
        if (COL != B.ROW) {
            return *this;  // Dimension mismatch, return original matrix.
        }
        Matrix result(ROW, B.COL, static_cast<T>(0));

        // Allocate temporary arrays for rearranged data
        T *temp[2];
        temp[0] = (T *)malloc(sizeof(T) * 8 * COL);
        temp[1] = (T *)malloc(sizeof(T) * 8 * COL);

        for (int j = 0; j < ROW; j += 8) {
            for (int i = 0; i < COL; i += 2) {
                // Rearrange data into temp for better cache utilization
                for (int k = 0; k < COL; ++k) {
                    temp[0][k * 8] = MATRIX[k][j];
                    temp[0][k * 8 + 1] = MATRIX[k][j + 1];
                    temp[0][k * 8 + 2] = MATRIX[k][j + 2];
                    temp[0][k * 8 + 3] = MATRIX[k][j + 3];
                    temp[1][k * 8] = MATRIX[k][j + 4];
                    temp[1][k * 8 + 1] = MATRIX[k][j + 5];
                    temp[1][k * 8 + 2] = MATRIX[k][j + 6];
                    temp[1][k * 8 + 3] = MATRIX[k][j + 7];
                }
            }
            for (int i = 0; i < B.COL; i += 8) {
                multiply_kernel(result.MATRIX, temp, B.MATRIX, j, i, COL);
            }
        }

        free(temp[0]);
        free(temp[1]);
        return result;
    }

    // NEON kernel for matrix multiplication
    void multiply_kernel(T **result, T **temp, T **b, int row, int col, int n) {
        for (int i = 0; i < 8; i += 4) {
            for (int j = 0; j < 8; j += 4) {
                int16x8_t sum = vdupq_n_s16(0);

                for (int k = 0; k < n; ++k) {
                    int16x8_t a_vec = vld1q_s16(&temp[i / 4][k * 8 + i % 4]);
                    int16x8_t b_vec = vld1q_s16(&b[k][col + j]);
                    sum = vmlaq_s16(sum, a_vec, b_vec);
                }

                vst1q_s16(&result[col + j][row + i], sum);
            }
        }
    }
};

int main() {
    cout << "Size: " << sizeof(short) << endl;
    array<int, 10> test = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    cout << "Optimized, NEON required" << endl;
    cout << "Test Size: " << endl;
    for (auto it = test.begin(); it != test.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (int i = 0; i < test.size(); i++) {
        cout << test[i] << ": ";
        Matrix<short> A(test[i], test[i], 1);  // Using short instead of float
        Matrix<short> B(test[i], test[i], 1);  // Using short instead of float

        clock_t start = clock();
        A.multiply(B);
        clock_t end = clock();

        double time_duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        cout << time_duration << "s" << endl;
    }

    cout << "Done" << endl;
    return 0;
}
