#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./mm_mult.h"

// A simple Processing Element (PE) that multiplies and accumulates
struct PE {
    int accumulate(int a, int b, int acc) {
        return a * b + acc;
    }
};

void matrix_mult(int a[A_MATRIX_SIZE],
                 int b[B_MATRIX_SIZE],
                 int c[C_MATRIX_SIZE]) {

    int a_buff[M][N];
    int b_buff[N][O];
    int c_buff[M][O] = {0}; // Initialize to zero

    // Systolic array: Array of Processing Elements (PEs)
    PE pe[M][O];

    #pragma HLS ARRAY_PARTITION variable=a_buff dim=1 block factor=2
    #pragma HLS ARRAY_PARTITION variable=b_buff dim=1 block factor=2
    #pragma HLS ARRAY_PARTITION variable=c_buff dim=1 block factor=2
    #pragma HLS ARRAY_PARTITION variable=a dim=1 block factor=2
    #pragma HLS ARRAY_PARTITION variable=b dim=1 block factor=2
    #pragma HLS ARRAY_PARTITION variable=c dim=1 block factor=2



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
    int time_steps = M + N + O - 2;
    for (int step = 0; step < time_steps; step++) {
        for (int m = 0; m < M; m++) {
            //#pragma HLS pipeline II=1
            for (int o = 0; o < O; o++) {

                #pragma HLS pipeline II=1
                int a_val = (step - m >= 0 && step - m < N) ? a_buff[m][step - m] : 0;
                int b_val = (step - o >= 0 && step - o < N) ? b_buff[step - o][o] : 0;
                c_buff[m][o] = pe[m][o].accumulate(a_val, b_val, c_buff[m][o]);
            }
        }
    }

    // // Matrix Multiplication
    // for (int m = 0; m < M; m++) {
    //     //#pragma HLS pipeline II=1
    //     for (int o = 0; o < O; o++) {
    //         #pragma HLS pipeline II=1
    //         c_buff[m][o] = 0;
    //         for (int n = 0; n < N; n++) {
    //             // #pragma HLS pipeline II=1
    //             c_buff[m][o] += a_buff[m][n] * b_buff[n][o];
    //         }
    //     }
    // }

    // Store C
    for (int i = 0; i < M; ++i) {
        #pragma HLS pipeline II=1
        for (int j = 0; j < O; ++j) {
            c[i * O + j] = c_buff[i][j];
        }
    }
}
