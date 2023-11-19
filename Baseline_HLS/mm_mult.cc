#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./mm_mult.h"

void matrix_mult(int a[A_MATRIX_SIZE],
                 int b[B_MATRIX_SIZE],
                 int c[C_MATRIX_SIZE]) {

    int a_buff[M][N];
    int b_buff[O][N];
    int c_buff[M][O];

    #pragma HLS ARRAY_PARTITION variable=a factor=100 dim=1 block
    #pragma HLS ARRAY_PARTITION variable=b factor=100 dim=1 block
    //#pragma HLS ARRAY_PARTITION variable=c_buff factor=100 dim=2 block

    // Load A & B
    for (int i = 0; i < M; ++i) {
        #pragma HLS PIPELINE II=1
        for (int j = 0; j < N; ++j) {
            a_buff[i][j] = a[i * N + j];
        }
    }

    for (int i = 0; i < O; ++i) {
        #pragma HLS pipeline II=1
        for (int j = 0; j < N; ++j) {
            b_buff[i][j] = b[i * N + j];
        }
    }

    // Matrix Multiplication
    for (int m = 0; m < M; m++) {
        //#pragma HLS pipeline II=1
        for (int o = 0; o < O; o++) {
            //#pragma HLS pipeline II=1
            c_buff[m][o] = 0;
            for (int n = 0; n < N; n++) {
                #pragma HLS pipeline II=1
                c_buff[m][o] += a_buff[m][n] * b_buff[o][n];
            }
        }
    }

    // Store C
    for (int i = 0; i < M; ++i) {
        #pragma HLS pipeline II=1
        for (int j = 0; j < O; ++j) {
            c[i * O + j] = c_buff[i][j];
        }
    }
}
