#ifndef BLOCK_MMULT_H
#define BLOCK_MMULT_H

#include "hls_stream.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

typedef short DTYPE;
const int M = 16;
const int O = 12;
const int N = 4;
const int M_BLOCK_SIZE = 4;
const int O_BLOCK_SIZE = 3;


typedef struct{
    DTYPE out[M][O];
}out_matrix;

typedef struct{
    DTYPE a[M][N];
}a_matrix;

typedef struct{
    DTYPE b[N][O];
}b_matrix;

void block_mmul(
    DTYPE A[M][N],
    DTYPE B[N][O],
    DTYPE out[M][O]
);

void block_mmul_helper(
    DTYPE A[M][N],
    DTYPE B[N][O],
    DTYPE out[M][O],
    int   ii,
    int   jj
);

void dut(
    hls::stream<a_matrix> &A_in,
    hls::stream<b_matrix> &B_in,
    hls::stream<out_matrix> &C_out
);

#endif 
