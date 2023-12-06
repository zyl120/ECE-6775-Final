#ifndef HOST_H
#define HOST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iomanip>
#include <iostream>
#include <vector>

#include "typedefs.h"

typedef short DTYPE;
// Assume M, O, N to be even numbers
#define SA_SIZE 4
#define M 4
#define O 4
#define N 4

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


#endif
