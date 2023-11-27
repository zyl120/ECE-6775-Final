#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./mm_mult.h"

void matrix_mult(short a[A_MATRIX_SIZE],
                 short b[B_MATRIX_SIZE],
                 short c[C_MATRIX_SIZE]) {

    short a_buff[M][N];
    short b_buff[N][O];
    short c_buff[M][O] = {0}; // Initialize to zero

    #pragma HLS ARRAY_PARTITION variable=a_buff dim=2 complete
    #pragma HLS ARRAY_PARTITION variable=b_buff dim=1 complete
    #pragma HLS ARRAY_PARTITION variable=c_buff dim=0 complete

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

    // Systolic Array for Matrix Multiplication
systolic1:
    for (int k = 0; k < N; k++) {
    //    #pragma HLS LOOP_TRIPCOUNT min=30 max=30
       #pragma HLS PIPELINE II=1
    systolic2:
        for (int i = 0; i < M; i++) {
        systolic3:
            for (int j = 0; j < O; j++) {
                short last = (k == 0) ? 0 : c_buff[i][j];
                short a_val = (i < M && k < N) ? a_buff[i][k] : 0;
                short b_val = (k < N && j < O) ? b_buff[k][j] : 0;
                // short a_val = a_buff[i][k];
                // short b_val = b_buff[k][j];
                short result = last + a_val * b_val;
                c_buff[i][j] = result;
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
