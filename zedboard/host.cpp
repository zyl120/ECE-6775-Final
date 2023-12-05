#include <assert.h>
#include <fcntl.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <fstream>
#include <iostream>

#include "timer.h"
#include "host.h"

unsigned globalSeed;

//------------------------------------------------------------------------
// Helper function for hex to int conversion
//------------------------------------------------------------------------
int64_t hexstring_to_int64(std::string h) {
    int64_t x = 0;
    for (int i = 0; i < h.length(); ++i) {
        char c = h[i];
        int k = (c > '9') ? toupper(c) - 'A' + 10 : c - '0';
        x = x * 16 + k;
    }
    return x;
}

//--------------------------------------
// main function
//--------------------------------------
int main(int argc, char **argv) {
    // Open channels to the FPGA board.
    // These channels appear as files to the Linux OS
    int fdr = open("/dev/xillybus_read_32", O_RDONLY);
    int fdw = open("/dev/xillybus_write_32", O_WRONLY);

    // Check that the channels are correctly opened
    if ((fdr < 0) || (fdw < 0)) {
        fprintf(stderr, "Failed to open Xillybus device channels\n");
        return -1;
    }

    A_MATRIX_T A; // input A matrix
    B_MATRIX_T B; // input B matrix
    OUT_MATRIX_T Out; // output matrix

    bit32_t input_2_in;
    bit32_t output_2_out;

    DTYPE out_ref[M][O]; // reference matrix result
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

// Initialize matrix B (N*O) with random values.
B_MATRIX_INIT:
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j++) {
            B.b[i][j] = rand_r(&globalSeed) % 16;
            std::cout << B.b[i][j] << " ";
        }
        std::cout << std::endl;
    }


    DTYPE sum = 0;
    Timer arm_timer("arm speed test timer");
    arm_timer.start();

    // Generate expected output of A*B.
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j++) {
            sum = 0;
            for (int k = 0; k < N; k++) {
                sum = sum + A.a[i][k] * B.b[k][j];
            }
            out_ref[i][j] = sum;
        }
    }

    arm_timer.stop();


    std::cout << "Begin axi transaction" << std::endl;

    // Timer
    Timer fpga_timer("FPGA timer");

    int nbytes;
    int error = 0;
    bit32_t interpreted_digit;


    fpga_timer.start();
     // write A to FPGA
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j = j + 2) {
            input_2_in = (A.a[i][j] << 16) + A.a[i][j+1];
            //strm_in.write(input_2_in);
            int32_t input = input_2_in;
            nbytes = write(fdw, (void *) &input, sizeof(input));
            assert(nbytes == sizeof(input));
        }
    }
    std::cout << "Matrix A sent." << std::endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j = j + 2) {
            input_2_in = (B.b[i][j] << 16) + B.b[i][j+1];
            //strm_in.write(input_2_in);
            int32_t input = input_2_in;
            nbytes = write(fdw, (void *) &input, sizeof(input));
            assert(nbytes == sizeof(input));
        }
    }

    std::cout << "Matrix B sent." << std::endl;
    

    //--------------------------------------------------------------------
    // Add your code here to communicate with the hardware module
    //--------------------------------------------------------------------
    // First add all digits into the FIFO
    // for (int i = 0; i < N; ++i) {
    //     digit current_digit = inputs[i];
    //     bit64_t current_digit_i;
    //     current_digit_i(current_digit.length() - 1, 0) = current_digit(current_digit.length() - 1, 0);
    //     int64_t input = current_digit_i;
    //     nbytes = write(fdw, (void *)&input, sizeof(input));
    //     assert(nbytes == sizeof(input));
    //     num_test_insts += 1; // increment the test instances counter.
    // }

    // After sending the digit to the FIFO, begin receiving data
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j = j + 2) {
            int32_t result_out;
            //output_2_out = strm_out.read();
            nbytes = read(fdr, (void *)&result_out, sizeof(result_out));
            assert(nbytes == sizeof(result_out));
            output_2_out = result_out;
            Out.out[i][j+1] = output_2_out;
            Out.out[i][j] = output_2_out >> 16;
        }
    }

    std::cout << "Result received." << std::endl;

    fpga_timer.stop();

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
        std::cout << "failed" << std::endl;
    } else {
        std::cout << "passed" << std::endl;
    }
    // for (int i = 0; i < N; ++i) {
    //     int32_t result_out;
    //     nbytes = read(fdr, (void *)&result_out, sizeof(result_out));
    //     assert(nbytes == sizeof(result_out));

    //     // converting int64 to bit_4
    //     bit32_t result_i = result_out;
    //     interpreted_digit(interpreted_digit.length() - 1, 0) = result_i(interpreted_digit.length() - 1, 0);

    //     if (interpreted_digit != expecteds[i]) {
    //         error += 1;
    //     }
    // }
    

    return 0;
}
