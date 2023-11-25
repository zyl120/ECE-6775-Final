#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "mm_mult.h"

unsigned globalSeed;

int main(void) {

  // Test outcome
  bool correct = true;

  // Reference output
  short c_ref[M][O];

  // Input and output array initialization
  short a[A_MATRIX_SIZE];
  short b[B_MATRIX_SIZE];
  short c[C_MATRIX_SIZE];
  for (int m = 0; m < M; m++) {
    for (int n = 0; n < N; n++) {
      a[m * N + n] = rand_r(&globalSeed) % 1024 - 512;
    }
  }
  for (int n = 0; n < N; n++) {
    for (int o = 0; o < O; o++) {
      b[n * O + o] = rand_r(&globalSeed) % 1024 - 512;
    }
  }

  //software matrix matrix multiplication
  for (int m = 0; m < M; m++) {
    for (int o = 0; o < O; o++) {
      c[m * O + o] = 0;
      c_ref[m][o] = 0;
    }
  }

  //call our matrix function
  matrix_mult(a, b, c);

  // Check output
  for (int m = 0; m < M; m++) {
    for (int o = 0; o < O; o++) {
      for (int n = 0; n < N; n++) {
        c_ref[m][o] += a[m * N + n] * b[n * O + o];
      }
      printf("%d, %d, %d, %d\n", c_ref[m][o], c[m*O+o], m, o);
      if (c_ref[m][o] != c[m * O + o]) {
        correct = false;
        break;
      }
    }
  }

  if (correct) {
    printf("Test successful\n");
  } else {
    printf("Test unsuccessful\n");
  }

  return 0;
}
