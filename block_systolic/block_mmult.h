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
const int SIZE = 1000;
const int BLOCK_SIZE = 10;

typedef struct{
    DTYPE a[BLOCK_SIZE];
}blockvector;

typedef struct{
    DTYPE out[BLOCK_SIZE][BLOCK_SIZE];
}blockmatrix;

void block_mmul(
    hls::stream<blockvector> &ARows,
    hls::stream<blockvector> &BCols,
    blockmatrix &abPartialSum,
    DTYPE iteration
);

#endif 
