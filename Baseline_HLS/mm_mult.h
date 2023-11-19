#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef MM_MULT_H
#define MM_MULT_H

#define M 100
#define N 100
#define O 100

#ifndef NO_SIM
void matrix_mult(
    volatile int *a,
    volatile int *b,
    volatile int *c);
#endif  // NO_SIM

#endif  // PART2_GEMM_H_
