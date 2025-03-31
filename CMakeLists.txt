cmake_minimum_required(VERSION 3.30)
project(NanoDB)

set(CMAKE_CXX_STANDARD 26)

# Add source files
add_executable(NanoDB src/NanoDB.cpp src/NanoDB.cpp src/QueryProcessor.cpp)

# Set output directory (optional)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
