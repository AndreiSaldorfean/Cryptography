set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
cmake_minimum_required(VERSION 3.30)
set(CMAKE_C_COMPILER "gcc")
project(A5_1 C)

set(CMAKE_BUILD_TYPE Debug)
add_executable(main src/main.c)

add_custom_target(run COMMAND main)