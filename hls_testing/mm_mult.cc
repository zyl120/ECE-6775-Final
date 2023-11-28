#include "mm_mult.h"

template <typename T>
class PE {
    T accumulatedValue;

   public:
    PE() : accumulatedValue(0) {}

    void compute(T inputA, T inputB) {
        accumulatedValue += inputA * inputB;
    }

    T getValue() const {
        return accumulatedValue;
    }

    void reset() {
        accumulatedValue = 0;
    }
};

template <typename T, size_t N>
class SystolicArray {
    PE<T> array[N][N];

   public:
    void multiply(T matrixA[N][N], T matrixB[N][N], T result[N][N]) {
        // Reset all PEs
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < N; ++j) {
                array[i][j].reset();
            }
        }

        // Perform the matrix multiplication using the systolic approach
        for (size_t step = 0; step < 2 * N - 1; ++step) {
            for (size_t i = 0; i < N; ++i) {
                for (size_t j = 0; j < N; ++j) {
                    if (step >= i && step - i < N && step >= j && step - j < N) {
                        array[i][j].compute(matrixA[i][step - i], matrixB[step - j][j]);
                    }
                }
            }
        }

        // Collect the results
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < N; ++j) {
                result[i][j] = array[i][j].getValue();
            }
        }
    }
};

// ================================ tiling_systolic ================================
void tiling_systolic_helper(
    DTYPE A[M][N],
    DTYPE B[N][O],
    DTYPE out[M][O],
    int ii,
    int jj) {
    for (int k = 0; k < N; k++) {
#pragma HLS PIPELINE II = 1
        for (int i = 0; i < M_BLOCK_SIZE; i++) {
            for (int j = 0; j < O_BLOCK_SIZE; j++) {
                DTYPE last = (k == 0) ? 0 : out[i + ii][j + jj];
                DTYPE a_val = (i + ii < M && k < N) ? A[i + ii][k] : 0;
                DTYPE b_val = (k < N && j + jj < O) ? B[k][j + jj] : 0;
                DTYPE result = last + a_val * b_val;
                out[i + ii][j + jj] = result;
            }
        }
    }
}

void mm_mult_tiling_systolic(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
#pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
#pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
#pragma HLS ARRAY_PARTITION variable = out dim = 0 complete
    for (int ii = 0; ii < M; ii += M_BLOCK_SIZE) {
        for (int jj = 0; jj < O; jj += O_BLOCK_SIZE) {
            tiling_systolic_helper(a, b, out, ii, jj);
        }
    }
}

// ================================ systolic ================================
void mm_mult_systolic(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
#pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
#pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
#pragma HLS ARRAY_PARTITION variable = out dim = 0 complete
    SystolicArray<DTYPE, N> systolicArray;
    systolicArray.multiply(a, b, out);
}

// void mm_mult_systolic (
//     DTYPE   a[M][N],
//     DTYPE   b[N][O],
//     DTYPE out[M][O]
// ){
//     #pragma HLS ARRAY_PARTITION variable=a dim=2 complete
//     #pragma HLS ARRAY_PARTITION variable=b dim=1 complete
//     #pragma HLS ARRAY_PARTITION variable=out dim=0 complete

//     systolic1:
//     for (int k = 0; k < N; k++) {
//         // #pragma HLS LOOP_TRIPCOUNT min=30 max=30
//         // #pragma HLS PIPELINE II=1
//         systolic2:
//         for (int i = 0; i < MAX_M_SIZE; i++) {
//             #pragma HLS UNROLL
//             systolic3:
//             for (int j = 0; j < MAX_M_SIZE; j++) {
//                 #pragma HLS UNROLL
//                 printf("%d, %d, %d\n", i, j, k);
//                 DTYPE last = (k == 0) ? 0 : out[i][j];
//                 DTYPE a_val = (i < M && k < N) ? a[i][k] : 0;
//                 DTYPE b_val = (k < N && j < O) ? b[k][j] : 0;
//                 DTYPE result = last + a_val * b_val;
//                 out[i][j] = result;
//             }
//         }
//     }
// }

// ================================ tiling ================================
void mm_mult_tiling(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
#pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
#pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
#pragma HLS ARRAY_PARTITION variable = out dim = 0 complete

    for (int ii = 0; ii < M; ii += M_BLOCK_SIZE) {
        for (int jj = 0; jj < O; jj += O_BLOCK_SIZE) {
#pragma HLS PIPELINE II = 1
            for (int i = 0; i < M_BLOCK_SIZE; i++) {
                for (int j = 0; j < O_BLOCK_SIZE; j++) {
                    DTYPE accum = 0;
                    for (int k = 0; k < N; k++) {
                        accum += a[i + ii][k] * b[k][j + jj];
                    }
                    out[i + ii][j + jj] = accum;
                }
            }
        }
    }
}

// ================================ baseline hls ================================
void mm_mult(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
    for (int m = 0; m < M; m++) {
        for (int o = 0; o < O; o++) {
            DTYPE accum = 0;
            for (int n = 0; n < N; n++) {
                accum += a[m][n] * b[n][o];
            }
            out[m][o] = accum;
        }
    }
}

// ================================ dut ================================
void dut(
    hls::stream<A_MATRIX_T> &A_in,
    hls::stream<B_MATRIX_T> &B_in,
    hls::stream<OUT_MATRIX_T> &Out_out) {
    A_MATRIX_T A = A_in.read();
    B_MATRIX_T B = B_in.read();

    OUT_MATRIX_T Out;

    //-----------Call mm_mult function---------------//
    // uncomment the one under tests
    // mm_mult(A.a, B.b, Out.out);
    // mm_mult_tiling(A.a, B.b, Out.out);
    mm_mult_systolic(A.a, B.b, Out.out);
    // mm_mult_tiling_systolic(A.a, B.b, Out.out);

    // write out the result.
    Out_out.write(Out);
}
