cmake_minimum_required(VERSION 3.14)
project(A5_1)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(libs/openssl/include)

add_executable(main src/main.c)
target_link_libraries(main PRIVATE ${PROJECT_SOURCE_DIR}/libs/openssl/libssl.a)
target_link_libraries(main PRIVATE ${PROJECT_SOURCE_DIR}/libs/openssl/libcrypto.a)
add_custom_target(run COMMAND main)
