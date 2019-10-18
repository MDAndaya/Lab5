cmake_minimum_required(VERSION 3.14)
project(Lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab5 main.cpp operation.hpp abstractOperation.hpp additionOperation.hpp subtractionOperation.hpp multiplicationOperation.hpp divisionOperation.hpp rpnCalculator.hpp rpnCalculator.cpp)