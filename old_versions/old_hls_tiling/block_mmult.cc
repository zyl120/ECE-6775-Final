#include "block_mmult.h"

void block_mmul(
    hls::stream<blockvector> &ARows,
    hls::stream<blockvector> &BCols,
    blockmatrix &abPartialSum,
    DTYPE iteration
){
    int counter = iteration % (SIZE/BLOCK_SIZE);
    static DTYPE A[BLOCK_SIZE][SIZE];
    #pragma HLS ARRAY_PARTITION variable=A dim=1 complete
    // #pragma HLS DATAFLOW
    if(counter == 0){
        loadA: for(int i=0; i<SIZE; i++){
            #pragma HLS PIPELINE II=1
            blockvector tempA = ARows.read();
            for(int j=0; j<BLOCK_SIZE; j++){
                A[j][i] = tempA.a[j];
            }
        }
    }

    DTYPE AB[BLOCK_SIZE][BLOCK_SIZE] = {0};
    #pragma HLS ARRAY_PARTITION variable=AB dim=1 complete
    partialsum: for(int k=0; k<SIZE; k++){
        
        blockvector tempB = BCols.read();
        for(int i = 0; i<BLOCK_SIZE;i++){
            #pragma HLS PIPELINE II=1
            for(int j = 0; j<BLOCK_SIZE; j++){
                AB[i][j] = AB[i][j] + A[i][k] * tempB.a[j];
            }
        }
    }

    
    writeoutput: for(int i = 0; i<BLOCK_SIZE; i++){
        #pragma HLS PIPELINE II=1
        for(int j=0; j<BLOCK_SIZE; j++){
            abPartialSum.out[i][j] = AB[i][j];
        }
    }
}
