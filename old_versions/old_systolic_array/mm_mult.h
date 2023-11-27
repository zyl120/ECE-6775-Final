#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef MM_MULT_H
#define MM_MULT_H

#ifndef M
#define M 10
#endif

#ifndef N
#define N 10
#endif

#ifndef O
#define O 10
#endif


#define A_MATRIX_SIZE M*N
#define B_MATRIX_SIZE O*N
#define C_MATRIX_SIZE M*O


void matrix_mult(short a[A_MATRIX_SIZE],
                 short b[B_MATRIX_SIZE],
                 short c[C_MATRIX_SIZE]);


#endif 
