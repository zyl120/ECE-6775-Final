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
  int c_ref[M][O];

  // Input and output array initialization
  int a[M*N];
  int b[O*N];
  int c[M*O];
  for (int m = 0; m < M; m++) {
    for (int n = 0; n < N; n++) {
      a[m * N + n] = rand_r(&globalSeed) % 1024 - 512;
    }
  }
  for (int o = 0; o < O; o++) {
    for (int n = 0; n < N; n++) {
      b[o * N + n] = rand_r(&globalSeed) % 1024 - 512;
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
        c_ref[m][o] += a[m * N + n] * b[o * N + n];
      }
      if (c_ref[m][o] != c[m * O + o]) {
        correct = false;
        break;
      }
    }
  }

  if (correct) {
    printf("Test successful\n");
    return 0;
  } else {
    printf("Test unsuccessful\n");
    return -1;
  }
}
