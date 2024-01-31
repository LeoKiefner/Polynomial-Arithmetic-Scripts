cmake_minimum_required(VERSION 3.27)
project(M41 C)

set(CMAKE_C_STANDARD 11)

add_executable(M41 main.c
        algos.c
        algos.h)
