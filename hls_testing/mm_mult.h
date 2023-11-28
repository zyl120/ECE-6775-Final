#ifndef MM_MULT_H
#define MM_MULT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iomanip>
#include <iostream>
#include <vector>

#include "hls_stream.h"
using namespace std;

typedef short DTYPE;
#define M 2
#define O 2
#define N 2
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

void dut(
    hls::stream<A_MATRIX_T> &A_in,
    hls::stream<B_MATRIX_T> &B_in,
    hls::stream<OUT_MATRIX_T> &Out_out);

#endif
