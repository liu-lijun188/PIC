cmake_minimum_required(VERSION 2.8.7)
project (output_cmake_test)

include_directories(PIC/PIC)
file(GLOB SOURCES "PIC/PIC/*.cpp")

add_executable(output_cmake ${SOURCES})
