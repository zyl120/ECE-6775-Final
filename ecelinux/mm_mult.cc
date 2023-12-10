#include "mm_mult.h"

//===============================PE=============================================================
template<typename T, int ITER>
DTYPE PE(hls::stream<DTYPE> &inputA, hls::stream<DTYPE> &inputB, hls::stream<DTYPE> &outputA, hls::stream<DTYPE> &outputB){
    DTYPE accum = 0;
    for(int i = 0; i<ITER; i++){
        DTYPE A_val = inputA.read();
        DTYPE B_val = inputB.read();
        accum += A_val * B_val;
        outputA.write(A_val);
        outputB.write(B_val);
    }
    return accum;
}

template<typename T, int ITER>
DTYPE PE_H(hls::stream<DTYPE> &inputA, hls::stream<DTYPE> &inputB, hls::stream<DTYPE> &outputA){
    DTYPE accum = 0;
    for(int i = 0; i<ITER; i++){
        DTYPE A_val = inputA.read();
        DTYPE B_val = inputB.read();
        accum += A_val * B_val;
        outputA.write(A_val);
    }
    return accum;
}

template<typename T, int ITER>
DTYPE PE_V(hls::stream<DTYPE> &inputA, hls::stream<DTYPE> &inputB, hls::stream<DTYPE> &outputB){
    DTYPE accum = 0;
    for(int i = 0; i<ITER; i++){
        DTYPE A_val = inputA.read();
        DTYPE B_val = inputB.read();
        accum += A_val * B_val;
        outputB.write(B_val);
    }
    return accum;
}

template<typename T, int ITER>
DTYPE PE_N(hls::stream<DTYPE> &inputA, hls::stream<DTYPE> &inputB){
    DTYPE accum = 0;
    for(int i = 0; i<ITER; i++){
        DTYPE A_val = inputA.read();
        DTYPE B_val = inputB.read();
        accum += A_val * B_val;
    }
    return accum;
}


// ================================ systolic ================================
void mm_mult_systolic(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
    hls::stream<DTYPE> h_fifo[SA_SIZE][SA_SIZE];  // array of fifos
    hls::stream<DTYPE> v_fifo[SA_SIZE][SA_SIZE];
    #pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
    #pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
    #pragma HLS ARRAY_PARTITION variable = out dim = 0 complete
    #pragma HLS STREAM variable = h_fifo depth = 10
    #pragma HLS STREAM variable = v_fifo depth = 10
    // initialize
    for (size_t i = 0; i < SA_SIZE; ++i) {
        #pragma HLS UNROLL
        for (size_t j = 0; j < SA_SIZE; ++j) {
            #pragma HLS UNROLL
            h_fifo[i][0].write(a[i][j]);
            v_fifo[0][j].write(b[i][j]);
        }
    }

    #pragma HLS DATAFLOW
    for(size_t i = 0; i < SA_SIZE; i++) {
        #pragma HLS UNROLL
        for(size_t j = 0; j < SA_SIZE; j++) {
            #pragma HLS UNROLL
            if(i + 1 < SA_SIZE && j + 1 < SA_SIZE) {
                out[i][j] = PE<DTYPE, SA_SIZE>(h_fifo[i][j], v_fifo[i][j], h_fifo[i][j+1], v_fifo[i+1][j]);
            } else if (i + 1 >= SA_SIZE && j + 1 < SA_SIZE ) {
                out[i][j] = PE_H<DTYPE, SA_SIZE>(h_fifo[i][j], v_fifo[i][j], h_fifo[i][j+1]);
            } else if (i + 1 < SA_SIZE && j + 1 >= SA_SIZE ) {
                out[i][j] = PE_V<DTYPE, SA_SIZE>(h_fifo[i][j], v_fifo[i][j], v_fifo[i+1][j]);
            } else {
                out[i][j] = PE_N<DTYPE, SA_SIZE>(h_fifo[i][j], v_fifo[i][j]);
            }
            
        }
    }
}

// ================================row-wise================================
void mm_mult_rowWise(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
#pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
#pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
#pragma HLS ARRAY_PARTITION variable = out dim = 0 complete
    for(int i = 0; i<N; i++){
        DTYPE C_vec[O];
        for(int j=0; j<O; j++){
            C_vec[j] = 0;
        }

        for(int k=0; k<N; k++){
            for(int j=0; j<O; j++){
                #pragma PIPELINE II=1
                C_vec[j] += a[i][k]*b[k][j];
            }
        }

        for(int j=0; j<O; j++){
            out[i][j] = C_vec[j];
        }
    }
}



// ================================ tiling ================================
void mm_mult_tiling(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
#pragma HLS ARRAY_PARTITION variable = a dim = 2 complete
#pragma HLS ARRAY_PARTITION variable = b dim = 1 complete
#pragma HLS ARRAY_PARTITION variable = out dim = 0 complete


    for (int ii = 0; ii < M; ii += M_BLOCK_SIZE) {
        for (int jj = 0; jj < O; jj += O_BLOCK_SIZE) {
            for (int i = 0; i < M_BLOCK_SIZE; i++) {
                #pragma HLS UNROLL
                for (int j = 0; j < O_BLOCK_SIZE; j++) {
                    #pragma HLS UNROLL
                    DTYPE accum = 0;
                    for (int k = 0; k < N; k++) {
                        accum += a[i + ii][k] * b[k][j + jj];
                    }
                    out[i + ii][j + jj] = accum;
                }
            }
        }
    }
}

// ================================ baseline hls ================================
void mm_mult(
    DTYPE a[M][N],
    DTYPE b[N][O],
    DTYPE out[M][O]) {
    for (int m = 0; m < M; m++) {
        for (int o = 0; o < O; o++) {
            DTYPE accum = 0;
            for (int n = 0; n < N; n++) {
                accum += a[m][n] * b[n][o];
            }
            out[m][o] = accum;
        }
    }
}

// ================================ dut ================================
void dut(
    hls::stream<bit32_t> &strm_in,
    hls::stream<bit32_t> &strm_out) {
    A_MATRIX_T A;
    B_MATRIX_T B;
    OUT_MATRIX_T Out;
    bit32_t input_2_in;
    bit32_t output_2_out;

    // receive A from ARM side
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j = j + 2) {
            input_2_in = strm_in.read();
            A.a[i][j + 1] = input_2_in;
            A.a[i][j] = input_2_in >> 16;
        }
    }

    // receive B from ARM side
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < O; j = j + 2) {
            input_2_in = strm_in.read();
            B.b[i][j + 1] = input_2_in;
            B.b[i][j] = input_2_in >> 16;
        }
    }

    std::cout << "received" << std::endl;

    //-----------Call mm_mult function---------------//
    // uncomment the one under tests, comment all to test axi delay
    // mm_mult(A.a, B.b, Out.out);
    // mm_mult_tiling(A.a, B.b, Out.out);
    mm_mult_systolic(A.a, B.b, Out.out);
    // mm_mult_rowWise(A.a, B.b, Out.out);

    // write out the result.
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < O; j = j + 2) {
            output_2_out = (Out.out[i][j] << 16) + Out.out[i][j + 1];
            strm_out.write(output_2_out);
        }
    }
}
