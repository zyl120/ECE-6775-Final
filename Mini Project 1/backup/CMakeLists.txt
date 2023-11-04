cmake_minimum_required(VERSION 3.17)
project(untitled)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS} -mavx -mavx2 -O3" )
set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp)