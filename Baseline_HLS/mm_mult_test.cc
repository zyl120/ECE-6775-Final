#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "mm_mult.h"
// #include "../src/test_lib.h"

unsigned globalSeed;

int main(void) {

  // Test outcome
  bool correct = true;

  // Reference output
  int c_ref[M][O];

  // Input and output array initialization
  int *a = (int *) allocBuffer(sizeof(int) * M * N);
  int *b = (int *) allocBuffer(sizeof(int) * O * N);
  int *c = (int *) allocBuffer(sizeof(int) * M * O);
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
  for (int m = 0; m < M; m++) {
    for (int o = 0; o < O; o++) {
      c[m * O + o] = 0;
      c_ref[m][o] = 0;
    }
  }

  // Invoke the matrix multiply module
#if NO_SIM
  uint64_t t_fpga = matrix_mult(a, b, c);
  printf("Synchronization time: %.3lfms\n", static_cast<float>(t_fpga) / 1E6);
#else
  matrix_mult(a, b, c);
#endif

  // Check output
  for (int m = 0; m < M; m++) {
    for (int o = 0; o < O; o++) {
      for (int n = 0; n < N; n++) {
        c_ref[m][o] += a[m * N + n] * b[o * N + n];
      }
      if (c_ref[m][o] != c[m * O + o]) {
        correct = false;
      }
    }
  }

  // Free arrays
  freeBuffer(a);
  freeBuffer(b);
  freeBuffer(c);

  if (correct) {
    printf("Test successful\n");
    return 0;
  } else {
    printf("Test unsuccessful\n");
    return -1;
  }
}
