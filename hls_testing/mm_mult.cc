#include "mm_mult.h"

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


//===============================PE=============================================================
template<typename T, int ITER>
DTYPE PE(hls::stream<DTYPE> &inputA, hls::stream<DTYPE> &inputB, hls::stream<DTYPE> &outputA, hls::stream<DTYPE> &outputB){
    DTYPE accum = 0;
    for(int i = 0; i<ITER; i++){
        DTYPE A_val = inputA.read();
        DTYPE B_val = inputB.read();
        accum += A_val * B_val;
        outputA.write(A_val);
        outputB.write(B_val);
    }
    return accum;
}



// ================================ systolic ================================
void mm_mult_systolic(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
    //PE<DTYPE> array[SA_SIZE][SA_SIZE];
    hls::stream<DTYPE> h_fifo[SA_SIZE+1][SA_SIZE+1];  // array of fifos
    hls::stream<DTYPE> v_fifo[SA_SIZE+1][SA_SIZE+1];
    #pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
    #pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
    #pragma HLS ARRAY_PARTITION variable = out dim = 0 complete
    #pragma HLS STREAM variable = h_fifo depth = 10
    #pragma HLS STREAM variable = v_fifo depth = 10
    // initialize
    for (size_t i = 0; i < SA_SIZE; ++i) {
        for (size_t j = 0; j < SA_SIZE; ++j) {
            h_fifo[i][0].write(a[i][j]);
            v_fifo[0][j].write(b[i][j]);
        }
    }

    #pragma HLS DATAFLOW
    for(size_t i = 0; i < SA_SIZE; i++) {
        #pragma HLS UNROLL
        for(size_t j = 0; j < SA_SIZE; j++) {
            #pragma HLS UNROLL
            out[i][j] = PE<DTYPE, 3 * (SA_SIZE - 1)>(h_fifo[i][j], v_fifo[i][j], h_fifo[i][j+1], v_fifo[i+1][j]);
            //std::cout << i << " " << j << std::endl;
        }
    }

    // multiply
    //for (size_t step = 0; step <= 3 * (SA_SIZE - 1); ++step) {
// std::cout << std::endl;
// std::cout << step << std::endl;

//         DTYPE h_val, v_val;
//         for (size_t i = 0; i < SA_SIZE; ++i) {
// #pragma HLS UNROLL
//             for (size_t j = 0; j < SA_SIZE; ++j) {
// #pragma HLS UNROLL
//                 // Ensure that we are within the bounds of matrix multiplication
//                 //if (i + j <= step && i + j + SA_SIZE > step) {
//                     // Compute the value for each processing element
//                     // printf("i=%d, j=%d ", i, j);
//                     if(!h_fifo[i][j].empty() && !v_fifo[i][j].empty()) {
//                         h_val = h_fifo[i][j].read();
//                         v_val = v_fifo[i][j].read();
//                         array[i][j].compute(h_val, v_val);
//                         if (j < SA_SIZE - 1) {
//                             h_fifo[i][j + 1].write(h_val);
//                         }
//                         if (i < SA_SIZE - 1) {
//                             v_fifo[i + 1][j].write(v_val);
//                         }
//                     }
                    
//                 //}
//             }
//         }
//     }
//     for (size_t i = 0; i < SA_SIZE; ++i) {
//         for (size_t j = 0; j < SA_SIZE; ++j) {
//             out[i][j] = array[i][j].getValue();
//         }
//     }

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
