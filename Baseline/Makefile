# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -O2
AVX2FLAGS = -mavx2

# Executable names
EXE1 = Traditional_Short
EXE2 = Traditional_Float
EXE3 = Optimized_Short
EXE4 = Optimized_Float

# Build all executables
all: $(EXE1) $(EXE2) $(EXE3) $(EXE4)

# Traditional executables
$(EXE1): Traditional_Short.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

$(EXE2): Traditional_Float.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# Optimized executables with AVX2 support
$(EXE3): Optimized_Short.cpp
	$(CXX) $(AVX2FLAGS) $(CXXFLAGS)  $^ -o $@

$(EXE4): Optimized_Float.cpp
	$(CXX) $(AVX2FLAGS) $(CXXFLAGS)  $^ -o $@

# Run targets
run: run1 run2 run3 run4

run1: $(EXE1)
	./$(EXE1)

run2: $(EXE2)
	./$(EXE2)

run3: $(EXE3)
	./$(EXE3)

run4: $(EXE4)
	./$(EXE4)

# Clean up
clean:
	rm -f $(EXE1) $(EXE2) $(EXE3) $(EXE4)

.PHONY: all run run1 run2 run3 run4 clean
