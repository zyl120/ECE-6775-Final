#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and runs the matrix-matrix mult program
#
# @desc: 1. "make" or "make sw" runs software execution by default
#        2. "make fpga" invokes the HW accelerator
#        3. "make clean" cleans up the directory


INC_PATH=/usr/include/vivado_hls
CFLAGS = -I${INC_PATH}

.PHONY: all fpga clean

all: fpga

mm-fpga: host.cpp
	@echo "Compiling host program"
	g++ ${CFLAGS} $^ -o $@
	@echo "Make sure bitstream is loaded!"

fpga: mm-fpga
	@echo "Running mm accelerator ..."
	./$<

# Clean up the directory before submission
clean:
	@echo "Clean up output files"
	rm -rf mm-fpga
