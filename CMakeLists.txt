cmake_minimum_required(VERSION 3.8)

project(microbenchmark LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

find_package(benchmark REQUIRED)

add_executable(benchmark benchmarking.cpp)
target_link_libraries(benchmark benchmark::benchmark)
