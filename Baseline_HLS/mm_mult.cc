#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./mm_mult.h"

// This module performs matrix multiplication of matrices A and B
// Where A is an (m,n) and B is an (n,o) matrix.
// We assume that B is stored transposed, resulting in a (o,n) shape.
void matrix_mult(
    volatile int *a,
    volatile int *b,
    volatile int *c) {
// #pragma HLS INTERFACE m_axi port = a offset = slave bundle = a_port
// #pragma HLS INTERFACE m_axi port = b offset = slave bundle = b_port
// #pragma HLS INTERFACE m_axi port = c offset = slave bundle = c_port
// #pragma HLS INTERFACE s_axilite port = return bundle = CONTROL_BUS

    int a_buff[M][N];
    int b_buff[O][N];
    int c_buff[M][O];

    // Load A & B
    memcpy(&a_buff[0][0], const_cast<int *>(a), sizeof(int) * M * N);
    memcpy(&b_buff[0][0], const_cast<int *>(b), sizeof(int) * O * N);

    // Matrix Multiplication
    for (int m = 0; m < M; m++) {
        for (int o = 0; o < O; o++) {
            c_buff[m][o] = 0;
            for (int n = 0; n < N; n++) {
                c_buff[m][o] += a_buff[m][n] * b_buff[o][n];
            }
        }
    }

    // Store C
    memcpy(const_cast<int *>(c), const_cast<int *>(&c_buff[0][0]), sizeof(int) * M * O);
}
