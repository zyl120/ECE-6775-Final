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

    // NEON SIMD matrix multiplication kernel.
    void multiply_kernel(float **result, float **a, float **b, int row, int col, int COL) {
        float32x4_t t0, t1, t2, t3, a0, a1, b0, b1, b2, b3;
        t0 = t1 = t2 = t3 = vdupq_n_f32(0);
        float *pb0(b[col]), *pb1(b[col + 1]), *pb2(b[col + 2]), *pb3(b[col + 3]),
            *pa0(a[0]), *pa1(a[1]), *end = pb0 + COL;
        while (pb0 != end) {
            a0 = vld1q_f32(pa0);
            a1 = vld1q_f32(pa1);
            b0 = vdupq_n_f32(*(pb0++));
            b1 = vdupq_n_f32(*(pb1++));
            b2 = vdupq_n_f32(*(pb2++));
            b3 = vdupq_n_f32(*(pb3++));
            t0 = vmlaq_f32(t0, a0, b0);
            t1 = vmlaq_f32(t1, a0, b1);
            t2 = vmlaq_f32(t2, a0, b2);
            t3 = vmlaq_f32(t3, a0, b3);
            pa0 += 4;
            pa1 += 4;
        }
        vst1q_f32(&result[col][row], t0);
        vst1q_f32(&result[col + 1][row], t1);
        vst1q_f32(&result[col + 2][row], t2);
        vst1q_f32(&result[col + 3][row], t3);
    }

    // Cache optimized NEON matrix multiplication.
    Matrix multiply(const Matrix &B) {
        if (COL != B.ROW) {
            return *this;  // Dimension mismatch, return original matrix.
        }
        Matrix result(ROW, B.COL, 0.0f);
        float *temp[2];
        temp[0] = (float *)malloc(sizeof(float) * 4 * COL);
        temp[1] = (float *)malloc(sizeof(float) * 4 * COL);

        for (int j = 0; j < ROW; j += 8) {
            for (int i = 0; i < COL; i += 2) {
                // Rearrange data into temp for better cache utilization
                // Similar to AVX2 example
                for (int k = 0; k < COL; ++k) {
                    temp[0][k * 4] = MATRIX[k][j];
                    temp[0][k * 4 + 1] = MATRIX[k][j + 1];
                    temp[0][k * 4 + 2] = MATRIX[k][j + 2];
                    temp[0][k * 4 + 3] = MATRIX[k][j + 3];
                    temp[1][k * 4] = MATRIX[k][j + 4];
                    temp[1][k * 4 + 1] = MATRIX[k][j + 5];
                    temp[1][k * 4 + 2] = MATRIX[k][j + 6];
                    temp[1][k * 4 + 3] = MATRIX[k][j + 7];
                }
            }
            for (int i = 0; i < B.COL; i += 4) {
                multiply_kernel(result.MATRIX, temp, B.MATRIX, j, i, COL);
            }
        }

        free(temp[0]);
        free(temp[1]);
        return result;
    }
};

int main() {
    cout << "Size: " << sizeof(float) << endl;
    array<int, 10> test = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    cout << "Optimized, NEON required" << endl;
    cout << "Test Size: " << endl;
    for (auto it = test.begin(); it != test.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (int i = 0; i < test.size(); i++) {
        cout << test[i] << ": ";
        Matrix<float> A(test[i], test[i], 1.0f);
        Matrix<float> B(test[i], test[i], 1.0f);
        clock_t start = clock();
        A.multiply(B);
        clock_t end = clock();
        double time_duration = static_cast<double>(end - start) / CLOCKS_PER_SEC;
        cout << time_duration << "s" << endl;
    }
    cout << "Done" << std::endl;
    return 0;
}
