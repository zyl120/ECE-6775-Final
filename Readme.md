# ECE6775 Systolic-Array-Based Matrix-Matrix Multiplication Project

## GitHub Link
[GitHub](https://github.com/zyl120/ECE-6775-Final)

## Overview
This project explores various designs for matrix multiplication using High-Level Synthesis (HLS), targeted for FPGA implementations. The key focus is on three distinct approaches: baseline, tiling, and systolic array designs. Each design is developed and optimized to showcase different aspects of hardware performance using HLS tools.

## Installation
Before running the project, ensure that the necessary HLS tools and FPGA software are installed on your system.

## Usage
To run each matrix multiplication implementation, comment/uncomment each function inside the `dut` function of `mm_mult.cc` inside the `ecelinux` directory. Then, run the `.tcl` file using `vivado_hls -f run.tcl` to generate the hardware implementation. Run `make bitstream` to generate the bitstream needed for FPGA reprogramming.

To run the implementation on Zedboard, copy the generated bitstream and the `zedboard` directory to the Zedboard. Then, copy the bitstream to `/mnt/sd` and then reboot the board. After that, run `make fpga` on the Zedboard to get the results.

## Implementation Details
- Baseline Implementation (`mm_mult`): This is a straightforward implementation of matrix multiplication and serves as a benchmark for evaluating the performance of other designs.
- Tiling Implementation (`mm_mult_tiling`): This approach optimizes data locality and efficiency by dividing the matrices into smaller sub-matrices, or 'tiles'.
- Systolic Array Implementation (`mm_mult_systolic`): A highly parallelized design characterized by its efficiency and low latency. This approach is optimized for high-throughput FPGA applications.

## Contributors
- Zilin Wang
- Yilu Zhou
- Kailing Shen
- Shaotian (Winchester) Zhang

## Acknowledgements
We extend our sincere thanks to Professor Zhiru Zhang and the dedicated teaching assistants for their invaluable guidance and support throughout the course of this project.
