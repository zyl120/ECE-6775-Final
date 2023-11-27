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
#define M 100
#define O 100
#define N 100
#define M_BLOCK_SIZE 4
#define O_BLOCK_SIZE 4


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
