#include "mm_mult.h"

void mm_mult (
    DTYPE   a[M][N],
    DTYPE   b[N][O],
    DTYPE out[M][O]
){ 
    for (int m = 0; m < M; m++) {
        //#pragma HLS pipeline II=1
        for (int o = 0; o < O; o++) {
            #pragma HLS pipeline II=1
            int accum = 0;
            for (int n = 0; n < N; n++) {
                // #pragma HLS pipeline II=1
                accum += a[m][n] * b[n][o];
            }
            out[m][o] = accum;
        }
    }
}

void dut (
    hls::stream<A_MATRIX_T>   &A_in,
    hls::stream<B_MATRIX_T>   &B_in,
    hls::stream<OUT_MATRIX_T> &Out_out
){
    A_MATRIX_T   A = A_in.read();
    B_MATRIX_T   B = B_in.read();

    OUT_MATRIX_T Out;

    // Initialize the output matrix with all 0.
    for(int i = 0; i < M; i++){
        for(int j = 0; j < O; j++){
            Out.out[i][j] = 0;
        }
    }

    // Call mm_mult function.
    mm_mult(A.a, B.b, Out.out);

    // write out the result.
    Out_out.write(Out);
}
