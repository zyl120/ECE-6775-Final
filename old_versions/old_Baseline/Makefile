# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -O2
AVX2FLAGS = -mavx2

# Executable names
EXE1 = Traditional_Short
EXE2 = Traditional_Float
EXE3 = AVX2_Short
EXE4 = AVX2_Float
EXE5 = Neon_Short
EXE6 = Neon_Float

# Build all executables
all: $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6)

# Traditional executables
$(EXE1): Traditional_Short.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

$(EXE2): Traditional_Float.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# Optimized executables with AVX2 support
$(EXE3): AVX2_Short.cpp
	$(CXX) $(AVX2FLAGS) $(CXXFLAGS)  $^ -o $@

$(EXE4): AVX2_Float.cpp
	$(CXX) $(AVX2FLAGS) $(CXXFLAGS)  $^ -o $@

# Optimized executables with Neon support
$(EXE5): Neon_Short.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

$(EXE6): Neon_Float.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# Run targets
run: nopt_short nopt_float avx2_short avx2_float neon_short neon_float

nopt_short: $(EXE1)
	./$(EXE1)

nopt_float: $(EXE2)
	./$(EXE2)

avx2_short: $(EXE3)
	./$(EXE3)

avx2_float: $(EXE4)
	./$(EXE4)

neon_short: $(EXE5)
	./$(EXE5)

neon_float: $(EXE6)
	./$(EXE6)

# Clean up
clean:
	rm -f $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6)

.PHONY: all run nopt_short nopt_float avx2_short avx2_float neon_short neon_float clean
