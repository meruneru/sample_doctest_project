cmake_minimum_required(VERSION 3.0)
project(cmake_test VERSION 0.0.1 LANGUAGES CXX)
include_directories("./")

# Activete c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O2 -Wall")

# Make test executable
add_library(main OBJECT ../main.cpp ../Dollar.cpp ../Franc.cpp)
add_executable(test test.cpp)
target_link_libraries(test main)
