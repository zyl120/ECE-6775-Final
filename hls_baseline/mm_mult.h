#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef MM_MULT_H
#define MM_MULT_H

#ifndef M
#define M 20
#endif

#ifndef N
#define N 20
#endif

#ifndef O
#define O 20
#endif


#define A_MATRIX_SIZE M*N
#define B_MATRIX_SIZE O*N
#define C_MATRIX_SIZE M*O


void matrix_mult(int a[A_MATRIX_SIZE],
                 int b[B_MATRIX_SIZE],
                 int c[C_MATRIX_SIZE]);


#endif 
