#ifndef MM_MULT_H
#define MM_MULT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iomanip>
#include <iostream>
#include <vector>

#include "hls_stream.h"

#include "typedefs.h"
using namespace std;

typedef short DTYPE;
// Assume M, O, N to be even numbers
#define M 8
#define O 8
#define N 8
#define M_BLOCK_SIZE 2
#define O_BLOCK_SIZE 2

typedef struct {
    DTYPE a[M][N];
} A_MATRIX_T;

typedef struct {
    DTYPE b[N][O];
} B_MATRIX_T;

typedef struct {
    DTYPE out[M][O];
} OUT_MATRIX_T;

void mm_mult(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]);

// void dut(
//     hls::stream<A_MATRIX_T> &A_in,
//     hls::stream<B_MATRIX_T> &B_in,
//     hls::stream<OUT_MATRIX_T> &Out_out);

void dut(
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out
);

#endif
