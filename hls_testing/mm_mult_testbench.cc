#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "hls_stream.h"
#include "mm_mult.h"

unsigned globalSeed;

int main() {
    // HLS streams for communicating with the mm_mult block
    hls::stream<A_MATRIX_T> A_in;
    hls::stream<B_MATRIX_T> B_in;
    hls::stream<OUT_MATRIX_T> Out_out;

    A_MATRIX_T A;
    B_MATRIX_T B;
    OUT_MATRIX_T Out;

    DTYPE out_ref[M][O];
    int fail = 0;

// Initialize matrix A (M*N) with random values.
A_MATRIX_INIT:
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A.a[i][j] = rand_r(&globalSeed) % 512;
        }
    }

    A_in.write(A);

// Initialize matrix B (N*O) with random values.
B_MATRIX_INIT:
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j++) {
            B.b[i][j] = rand_r(&globalSeed) % 512;
        }
    }

    B_in.write(B);

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

    // Perform matrix-matrix multiplication.
    dut(A_in, B_in, Out_out);

    // Check results.
    Out = Out_out.read();
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
