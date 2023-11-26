#include "block_mmult.h"

void block_mmul_helper(
    DTYPE A[M][N],
    DTYPE B[N][O],
    DTYPE out[M][O],
    int ii,
    int jj
) {
    for(int k = 0; k < N; k++){
        #pragma HLS PIPELINE II=1
        for(int i = ii; i < ii+M_BLOCK_SIZE; i++) {
            for(int j = jj; j < jj+O_BLOCK_SIZE; j++) {
                out[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void block_mmul(
    DTYPE A[M][N],
    DTYPE B[N][O],
    DTYPE out[M][O]
){
    // static DTYPE A[M_BLOCK_SIZE][N];
    // #pragma HLS ARRAY_PARTITION variable=A dim=1 complete
    // // #pragma HLS DATAFLOW
    // if(counter == 0){
    //     loadA: for(int i=0; i<N; i++){
    //         #pragma HLS PIPELINE II=1
    //         blockvector tempA = ARows.read();
    //         for(int j=0; j<M_BLOCK_SIZE; j++){
    //             A[j][i] = tempA.a[j];
    //         }
    //     }
    // }

    // DTYPE AB[M_BLOCK_SIZE][O_BLOCK_SIZE] = {0};
    // #pragma HLS ARRAY_PARTITION variable=AB dim=1 complete
    // partialsum:
    
    for(int ii = 0; ii < M; ii += M_BLOCK_SIZE) {
        for(int jj = 0; jj < O; jj += O_BLOCK_SIZE) {
            block_mmul_helper(A,B,out,ii,jj);
        }
    }

    // DTYPE AB[BLOCK_SIZE][BLOCK_SIZE] = {0};
    // #pragma HLS ARRAY_PARTITION variable=AB dim=1 complete
    // systolic1:
    // for (int k = 0; k < BLOCK_SIZE; k++) {
    //    #pragma HLS PIPELINE II=1
    //    blockvector tempB = BCols.read();
    //     for (int i = 0; i < BLOCK_SIZE; i++) {
    //         for (int j = 0; j < BLOCK_SIZE; j++) {
    //             DTYPE last = (k == 0) ? 0 : AB[i][j];
    //             DTYPE a_val = (i < BLOCK_SIZE && k < BLOCK_SIZE) ? A[i][k] : 0;
    //             DTYPE b_val = (k < BLOCK_SIZE && j < BLOCK_SIZE) ? tempB.a[j] : 0;
    //             DTYPE result = last + a_val * b_val;
    //             AB[i][j] = result;
    //         }
    //     }
    // }

    
    // writeoutput: for(int i = 0; i<M_BLOCK_SIZE; i++){
    //     #pragma HLS PIPELINE II=1
    //     for(int j=0; j<O_BLOCK_SIZE; j++){
    //         abPartialSum.out[i][j] = AB[i][j];
    //     }
    // }
}


void dut(
    hls::stream<a_matrix> &A_in,
    hls::stream<b_matrix> &B_in,
    hls::stream<out_matrix> &C_out
){
    a_matrix A_MATRIX = A_in.read();
    b_matrix B_MATRIX = B_in.read();
    out_matrix out_MATRIX;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < O; j++){
            out_MATRIX.out[i][j] = 0;
        }
    }
    block_mmul(A_MATRIX.a, B_MATRIX.b, out_MATRIX.out);
    C_out.write(out_MATRIX);
}

// void dut(hls::stream<bit32_t> &strm_in, hls::stream<bit32_t> &strm_out) {
//   bit input[1][I_WIDTH1][I_WIDTH1];
//   bit32_t input_l;
//   bit32_t output;

//   // read one test image into digit
//   int bitcount = 0;
//   for (int i = 0; i < I_WIDTH1 * I_WIDTH1 / BUS_WIDTH; i++) {
//     input_l = strm_in.read();
//     for (int j = 0; j < BUS_WIDTH; j++) {
//       input[0][bitcount / I_WIDTH1][bitcount % I_WIDTH1] = input_l(j, j);
//       bitcount++;
//     }
//   }
//   // call bnn
//   output = bnn_xcel(input);

//   // write out the result
//   strm_out.write(output);
// }
