#include "mm_mult.h"

template <typename T>
class PE {
    T accumulatedValue;
    T tempHorizontalValue;
    T horizontalValue;
    T tempVerticalValue;
    T verticalValue;
    // hls::stream<DTYPE> fifo_A_in;
    // hls::stream<DTYPE> fifo_A_out;
    // hls::stream<DTYPE> fifo_B_in;
    // hls::stream<DTYPE> fifo_B_out;

   public:
    PE() {
        accumulatedValue = 0;
        tempHorizontalValue = 0;
        horizontalValue = 0;
        tempVerticalValue = 0;
        verticalValue = 0;
        // fifo_A_in = nullptr;
        // fifo_B_in = nullptr;
        // fifo_A_out = nullptr;
        // fifo_B_out = nullptr;
    }

    // void setHorizontalFifo(hls::stream<DTYPE> &fifo_in, hls::stream<DTYPE> &fifo_out){
    //     fifo_A_in = fifo_in;
    //     fifo_A_out = fifo_out;
    // }

    // void setVertialFifo(hls::stream<DTYPE> &fifo_in, hls::stream<DTYPE> &fifo_out) {
    //     fifo_B_in = fifo_in;
    //     fifo_B_out = fifo_out;
    // }

    void compute(T inputA, T inputB) {
        // tempHorizontalValue = inputA;
        // tempVerticalValue = inputB;
        accumulatedValue += inputA * inputB;
        // std::cout << "[" << inputA << "*" << inputB << "]" << std::endl;
        //  fifo_A_out.write(tempHorizontalValue);
        //  fifo_B_out.write(tempVerticalValue);
    }

    // void complete() {
    //     fifo_C_drain_out.write(accumulatedValue);
    // }

    T getValue() const {
        return accumulatedValue;
    }

    T getHorizontalValue() const {
        // std::cout << "hv" << horizontalValue << " ";
        return horizontalValue;
    }

    T getVerticalValue() const {
        // std::cout << "vv" << verticalValue << " ";
        return verticalValue;
    }

    void reset() {
        accumulatedValue = 0;
        tempHorizontalValue = 0;
        horizontalValue = 0;
        tempVerticalValue = 0;
        verticalValue = 0;
    }

    // void update() {
    //     horizontalValue = tempHorizontalValue;
    //     verticalValue = tempVerticalValue;
    // }
};

// template <typename T, size_t SA_SIZE>
// class SystolicArray {

//     PE<T> array[SA_SIZE][SA_SIZE];
//     hls::stream<DTYPE> h_fifo[SA_SIZE][SA_SIZE]; // array of fifos
//     hls::stream<DTYPE> v_fifo[SA_SIZE][SA_SIZE];

//    public:
//     void initialize(T matrixA[SA_SIZE][SA_SIZE], T matrixB[SA_SIZE][SA_SIZE]) {
//         for (size_t i = 0; i < SA_SIZE; ++i) {
//             for (size_t j = 0; j < SA_SIZE; ++j) {
//                 // array[i][j].setHorizontalFifo(h_fifo[i][j], h_fifo[i][j+1]);
//                 // array[i][j].setVertialFifo(v_fifo[i][j], v_fifo[i+1][j]);
//                 array[i][j].reset();
//             }
//         }

//         // put matrix A to horizontal fifos
//         for (size_t i = 0; i < SA_SIZE; ++i) {
//             for(size_t j = 0; j < SA_SIZE; ++j) {
//                 h_fifo[i][0].write(matrixA[i][j]);
//             }
//         }

//         // put matrix B to vertical fifos
//         for(size_t j = 0; j < SA_SIZE; ++j) {
//             for (size_t i = 0; i < SA_SIZE; ++i) {
//                 v_fifo[0][j].write(matrixB[i][j]);
//             }
//         }
//     }

//     // void write_h_fifo(DTYPE val, int i, int j){
//     //     if(j < SA_SIZE - 1) {
//     //                         h_fifo[i][j+1].write(val);
//     //     }
//     // }

//     // void write_v_fifo(DTYPE val, int i, int j) {
//     //     if(i < SA_SIZE - 1) {
//     //                         v_fifo[i+1][j].write(val);
//     //     }
//     // }

//     // DTYPE read_h_fifo(int i, int j) {
//     //     return h_fifo[i][j].read();
//     // }

//     // DTYPE read_v_fifo(int i, int j) {
//     //     return v_fifo[i][j].read();
//     // }

//     void multiply() {
//         #pragma HLS STREAM variable=h_fifo depth=100
//         #pragma HLS STREAM variable=v_fifo depth=100
//         // Reset all PEs
//         for (size_t i = 0; i < SA_SIZE; ++i) {
//             for (size_t j = 0; j < SA_SIZE; ++j) {
//                 array[i][j].reset();
//             }
//         }

//         // Perform the matrix multiplication using the systolic approach
//         // #pragma HLS DATAFLOW
//         // #pragma HLS PIPELINE II=1
//         for (size_t step = 0; step <= 3 * (SA_SIZE - 1); ++step) {
//             // std::cout << std::endl;
//             // std::cout << step << std::endl;
//             #pragma HLS PIPELINE II=1
//             DTYPE h_val, v_val;
//             for (size_t i = 0; i < SA_SIZE; ++i) {
//                 #pragma HLS UNROLL
//                 for (size_t j = 0; j < SA_SIZE; ++j) {
//                     #pragma HLS UNROLL
//                     // Ensure that we are within the bounds of matrix multiplication
//                     if (i + j <= step && i + j + SA_SIZE > step) {
//                         // Compute the value for each processing element
//                         //printf("i=%d, j=%d ", i, j);
//                         h_val = h_fifo[i][j].read();
//                         v_val = v_fifo[i][j].read();
//                         array[i][j].compute(h_val, v_val);
//                         if(j < SA_SIZE - 1) {
//                             h_fifo[i][j+1].write(h_val);
//                         }
//                         if(i < SA_SIZE - 1) {
//                             v_fifo[i+1][j].write(v_val);
//                         }
//                     }
//                 }
//             }
//         }
//     }

//     void complete(T result[SA_SIZE][SA_SIZE]) {
//         for (size_t i = 0; i < SA_SIZE; ++i) {
//             for (size_t j = 0; j < SA_SIZE; ++j) {
//                 result[i][j] = array[i][j].getValue();
//             }
//         }
//     }
// };

// ================================ tiling_systolic ================================
// void tiling_systolic_helper(
//     DTYPE A[M][N],
//     DTYPE B[N][O],
//     DTYPE out[M][O],
//     int ii,
//     int jj) {
//     for (int k = 0; k < N; k++) {
// #pragma HLS PIPELINE II = 1
//         for (int i = 0; i < M_BLOCK_SIZE; i++) {
//             for (int j = 0; j < O_BLOCK_SIZE; j++) {
//                 DTYPE last = (k == 0) ? 0 : out[i + ii][j + jj];
//                 DTYPE a_val = (i + ii < M && k < N) ? A[i + ii][k] : 0;
//                 DTYPE b_val = (k < N && j + jj < O) ? B[k][j + jj] : 0;
//                 DTYPE result = last + a_val * b_val;
//                 out[i + ii][j + jj] = result;
//             }
//         }
//     }
// }

// void mm_mult_tiling_systolic(
//     DTYPE a[M][N],
//     DTYPE b[N][O],
//     DTYPE out[M][O]) {
// #pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
// #pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
// #pragma HLS ARRAY_PARTITION variable = out dim = 0 complete
//     for (int ii = 0; ii < M; ii += M_BLOCK_SIZE) {
//         for (int jj = 0; jj < O; jj += O_BLOCK_SIZE) {
//             tiling_systolic_helper(a, b, out, ii, jj);
//         }
//     }
// }

// ================================ systolic ================================
void mm_mult_systolic(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
    PE<DTYPE> array[SA_SIZE][SA_SIZE];
    hls::stream<DTYPE> h_fifo[SA_SIZE][SA_SIZE];  // array of fifos
    hls::stream<DTYPE> v_fifo[SA_SIZE][SA_SIZE];
#pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
#pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
#pragma HLS ARRAY_PARTITION variable = out dim = 0 complete
#pragma HLS STREAM variable = h_fifo depth = 100
#pragma HLS STREAM variable = v_fifo depth = 100
    // SystolicArray<DTYPE, N> systolicArray;
    // initialize
    for (size_t i = 0; i < SA_SIZE; ++i) {
        for (size_t j = 0; j < SA_SIZE; ++j) {
            // array[i][j].setHorizontalFifo(h_fifo[i][j], h_fifo[i][j+1]);
            // array[i][j].setVertialFifo(v_fifo[i][j], v_fifo[i+1][j]);
            array[i][j].reset();
        }
    }

    // put matrix A to horizontal fifos
    for (size_t i = 0; i < SA_SIZE; ++i) {
        for (size_t j = 0; j < SA_SIZE; ++j) {
            h_fifo[i][0].write(a[i][j]);
        }
    }

    // put matrix B to vertical fifos
    for (size_t j = 0; j < SA_SIZE; ++j) {
        for (size_t i = 0; i < SA_SIZE; ++i) {
            v_fifo[0][j].write(b[i][j]);
        }
    }

    // multiply
    for (size_t step = 0; step <= 3 * (SA_SIZE - 1); ++step) {
// std::cout << std::endl;
// std::cout << step << std::endl;
#pragma HLS PIPELINE II = 1
        DTYPE h_val, v_val;
        for (size_t i = 0; i < SA_SIZE; ++i) {
#pragma HLS UNROLL
            for (size_t j = 0; j < SA_SIZE; ++j) {
#pragma HLS UNROLL
                // Ensure that we are within the bounds of matrix multiplication
                if (i + j <= step && i + j + SA_SIZE > step) {
                    // Compute the value for each processing element
                    // printf("i=%d, j=%d ", i, j);
                    h_val = h_fifo[i][j].read();
                    v_val = v_fifo[i][j].read();
                    array[i][j].compute(h_val, v_val);
                    if (j < SA_SIZE - 1) {
                        h_fifo[i][j + 1].write(h_val);
                    }
                    if (i < SA_SIZE - 1) {
                        v_fifo[i + 1][j].write(v_val);
                    }
                }
            }
        }
    }
    for (size_t i = 0; i < SA_SIZE; ++i) {
        for (size_t j = 0; j < SA_SIZE; ++j) {
            out[i][j] = array[i][j].getValue();
        }
    }

    // systolicArray.initialize(a, b);
    // systolicArray.multiply();
    // systolicArray.complete(out);
}

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
// void dut(
//     hls::stream<A_MATRIX_T> &A_in,
//     hls::stream<B_MATRIX_T> &B_in,
//     hls::stream<OUT_MATRIX_T> &Out_out) {
//     A_MATRIX_T A = A_in.read();
//     B_MATRIX_T B = B_in.read();

//     OUT_MATRIX_T Out;

//     //-----------Call mm_mult function---------------//
//     // uncomment the one under tests
//     // mm_mult(A.a, B.b, Out.out);
//     // mm_mult_tiling(A.a, B.b, Out.out);
//     mm_mult_systolic(A.a, B.b, Out.out);
//     // mm_mult_tiling_systolic(A.a, B.b, Out.out);

//     // write out the result.
//     Out_out.write(Out);
//}

void dut(
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out) {
    A_MATRIX_T A;
    B_MATRIX_T B;
    OUT_MATRIX_T Out;
    bit32_t input_2_in;
    bit32_t output_2_out;

    // receive A from ARM side
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j = j + 2) {
            input_2_in = strm_in.read();
            A.a[i][j + 1] = input_2_in;
            A.a[i][j] = input_2_in >> 16;
        }
    }

    // receive B from ARM side
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j = j + 2) {
            input_2_in = strm_in.read();
            B.b[i][j + 1] = input_2_in;
            B.b[i][j] = input_2_in >> 16;
        }
    }

    std::cout << "received" << std::endl;

    //-----------Call mm_mult function---------------//
    // uncomment the one under tests
    // mm_mult(A.a, B.b, Out.out);
    // mm_mult_tiling(A.a, B.b, Out.out);
    mm_mult_systolic(A.a, B.b, Out.out);
    // mm_mult_tiling_systolic(A.a, B.b, Out.out);

    // write out the result.
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j = j + 2) {
            output_2_out = (Out.out[i][j] << 16) + Out.out[i][j + 1];
            strm_out.write(output_2_out);
        }
    }
}
