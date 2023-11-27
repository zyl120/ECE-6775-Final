#include "block_mmult.h"

// void block_mmul_helper(
//     DTYPE A[M][N],
//     DTYPE B[N][O],
//     DTYPE out[M][O],
//     int ii,
//     int jj
// ) {
//     for(int k = 0; k < N; k++){
//         // #pragma HLS PIPELINE II=1
//         for(int i = 0; i < M_BLOCK_SIZE; i++) {
//             for(int j = 0; j < O_BLOCK_SIZE; j++) {
//                 out[i+ii][j+jj] += A[i+ii][k] * B[k][j+jj];
//             }
//         }
//     }
// }

void block_mmul(
    DTYPE A[M][N],
    DTYPE B[N][O],
    DTYPE out[M][O]
){ 
    // for(int ii = 0; ii < M; ii += M_BLOCK_SIZE) {
    //     for(int jj = 0; jj < O; jj += O_BLOCK_SIZE) {
    //         for(int i = 0; i < M_BLOCK_SIZE; i++) {
    //             for(int j = 0; j < O_BLOCK_SIZE; j++) { 
    //                 #pragma HLS PIPELINE II=1
    //                 for(int k = 0; k < N; k++){
    //                     out[i+ii][j+jj] += A[i+ii][k] * B[k][j+jj];
    //                 }
    //             }
    //         }
    //     }
    // }
    for(int k = 0; k < N; k++){
        for(int ii = 0; ii < M; ii += M_BLOCK_SIZE) {
            for(int jj = 0; jj < O; jj += O_BLOCK_SIZE) {
                #pragma HLS PIPELINE II=1
                for(int i = 0; i < M_BLOCK_SIZE; i++) {
                    for(int j = 0; j < O_BLOCK_SIZE; j++) { 
                        out[i+ii][j+jj] += A[i+ii][k] * B[k][j+jj];
                    }
                }
            }
        }
    }
}

void dut(
    hls::stream<a_matrix> &A_in,
    hls::stream<b_matrix> &B_in,
    hls::stream<out_matrix> &C_out
){
    a_matrix A_MATRIX = A_in.read();
    b_matrix B_MATRIX = B_in.read();
    out_matrix out_MATRIX;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < O; j++){
            out_MATRIX.out[i][j] = 0;
        }
    }
    block_mmul(A_MATRIX.a, B_MATRIX.b, out_MATRIX.out);
    C_out.write(out_MATRIX);
}
