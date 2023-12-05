#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "hls_stream.h"
#include "mm_mult.h"

unsigned globalSeed;

int main() {
    // HLS streams for communicating with the mm_mult block
    hls::stream<bit32_t> strm_in;
    hls::stream<bit32_t> strm_out;

    A_MATRIX_T A;
    B_MATRIX_T B;
    OUT_MATRIX_T Out;

    bit32_t input_2_in;
    bit32_t output_2_out;

    DTYPE out_ref[M][O];
    int fail = 0;

// Initialize matrix A (M*N) with random values.
A_MATRIX_INIT:
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A.a[i][j] = rand_r(&globalSeed) % 16;
            std::cout << A.a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // write A to FPGA
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j = j + 2) {
            input_2_in = (A.a[i][j] << 16) + A.a[i][j+1];
            strm_in.write(input_2_in);
        }
    }

// Initialize matrix B (N*O) with random values.
B_MATRIX_INIT:
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j++) {
            B.b[i][j] = rand_r(&globalSeed) % 16;
            std::cout << B.b[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //B_in.write(B);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j = j + 2) {
            input_2_in = (B.b[i][j] << 16) + B.b[i][j+1];
            strm_in.write(input_2_in);
        }
    }

    // Generate expected output of A*B.
    DTYPE sum = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j++) {
            sum = 0;
            for (int k = 0; k < N; k++) {
                sum = sum + A.a[i][k] * B.b[k][j];
            }
            out_ref[i][j] = sum;
        }
    }

    dut(strm_in, strm_out);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j = j + 2) {
            output_2_out = strm_out.read();
            Out.out[i][j+1] = output_2_out;
            Out.out[i][j] = output_2_out >> 16;
        }
    }

    // Perform matrix-matrix multiplication.
    // dut(A_in, B_in, Out_out);

    // Check results.
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j++) {
            printf("%d, %d, %d, expected = %d\n", i, j, Out.out[i][j], out_ref[i][j]);
            if (Out.out[i][j] != out_ref[i][j]) {
                printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
                fail = 1;
            }
        }
    }

    if (fail == 1) {
        cout << "failed" << endl;
    } else {
        cout << "passed" << endl;
    }
    return 0;
}
