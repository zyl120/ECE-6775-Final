#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./mm_mult.h"

void matrix_mult(int a[A_MATRIX_SIZE],
                 int b[B_MATRIX_SIZE],
                 int c[C_MATRIX_SIZE]) {

    int a_buff[M][N];
    int b_buff[N][O];
    int c_buff[M][O];

    #pragma HLS ARRAY_RESHAPE variable=a_buff block dim=2 factor=2
    #pragma HLS ARRAY_RESHAPE variable=b_buff block dim=1 factor=2

    // Load A & B
    for (int i = 0; i < M; ++i) {
        #pragma HLS PIPELINE II=1
        for (int j = 0; j < N; ++j) {
            a_buff[i][j] = a[i * N + j];
        }
    }

    for (int i = 0; i < N; ++i) {
        #pragma HLS pipeline II=1
        for (int j = 0; j < O; ++j) {
            b_buff[i][j] = b[i * O + j];
        }
    }

    // Matrix Multiplication
    for (int m = 0; m < M; m++) {
        //#pragma HLS pipeline II=1
        for (int o = 0; o < O; o++) {
            #pragma HLS pipeline II=1
            int accum = 0;
            for (int n = 0; n < N; n++) {
                // #pragma HLS pipeline II=1
                accum += a_buff[m][n] * b_buff[n][o];
            }
            c_buff[m][o] = accum;
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
