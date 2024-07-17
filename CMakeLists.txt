cmake_minimum_required(VERSION 3.28)
project(Fu_num C)

set(CMAKE_C_STANDARD 11)

add_executable(Fu_num main.c
        complex.c
        complex.h)
