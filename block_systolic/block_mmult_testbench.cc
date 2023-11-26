#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "block_mmult.h"
#include "hls_stream.h"

unsigned globalSeed;

void matmatmul_sw(DTYPE A[M][N], DTYPE B[N][O], DTYPE out[M][O]){
  DTYPE sum = 0;
  for(int i = 0; i < M; i++){
    for(int j = 0; j < O; j++){
      sum = 0;
      for(int k = 0; k < N; k++){
        sum = sum + A[i][k] * B[k][j];
      }
      out[i][j] = sum;
    } 
  }
}


int main(void) {
  int fail = 0;
  // hls::stream<blockvector> strm_matrix1("strm_matrix1");
  // hls::stream<blockvector> strm_matrix2("strm_matrix2");

  hls::stream<a_matrix> A_in;
  hls::stream<b_matrix> B_in;
  hls::stream<out_matrix> C_out;

  
  // blockvector strm_matrix1_element, strm_matrix2_element;
  // blockmatrix block_out;

  // DTYPE A[M][N], B[N][O];
  // DTYPE matrix_swout[M][O], matrix_hwout[M][O];
  DTYPE matrix_swout[M][O];

  a_matrix A;
  b_matrix B;
  out_matrix matrix_hwout;

  A_MATRIX_INIT:
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      A.a[i][j] = rand_r(&globalSeed) % 512;
    }
  }

  A_in.write(A);

  B_MATRIX_INIT:
  for(int i = 0; i < N; i++){
    for(int j = 0; j < O; j++){
      B.b[i][j] = rand_r(&globalSeed) % 512;
    }
  }
  
  B_in.write(B);

  OUT_MATRIX_INIT:
  for(int i = 0; i < M; i++){
    for(int j = 0; j < O; j++){
      matrix_swout[i][j] = 0;
    }
  }

  dut(A_in, B_in, C_out);

  matrix_hwout = C_out.read();
  
  matmatmul_sw(A.a, B.b, matrix_swout);
  
  for(int i = 0; i<M; i++) {
    for(int j = 0; j<O; j++) {
      printf("%d, %d, %d, %d\n", i, j, matrix_swout[i][j], matrix_hwout.out[i][j]);
      if(matrix_swout[i][j] != matrix_hwout.out[i][j]) {
        fail=1;
        //break;
      } 
    }
  }

  if(fail==1) {
    cout << "failed" << endl;
  }
  else {
    cout << "passed" << endl;
  }
  return 0;
}

// int main() {
//   //test();

//   // HLS streams for communicating with the cordic block
//   hls::stream<bit32_t> digitrec_in;
//   hls::stream<bit32_t> digitrec_out;

//   int8_t test_images[TEST_SIZE][256];
//   int test_labels[TEST_SIZE];

//   // read test images and labels
//   read_test_images(test_images);
//   read_test_labels(test_labels);
//   bit32_t test_image;
//   float correct = 0.0;

//   // Timer
//   Timer timer("digirec BNN");
//   timer.start();

//   // pack images to 32-bit and transmit to dut function
//   for (int test = 0; test < TEST_SIZE; test++) {
//     for (int i = 0; i < I_WIDTH1 * I_WIDTH1 / BUS_WIDTH; i++) {
//       for (int j = 0; j < BUS_WIDTH; j++) {
//         test_image(j, j) = test_images[test][i * BUS_WIDTH + j];
//       }
//       digitrec_in.write(test_image);
//     }

//     // perform prediction
//     dut(digitrec_in, digitrec_out);

//     // check results
//     if (digitrec_out.read() == test_labels[test])
//       correct += 1.0;
//   }
//   timer.stop();

//   // Calculate accuracy
//   std::cout << "Accuracy: " << correct / TEST_SIZE << std::endl;

//   return 0;
// }
