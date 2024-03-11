cmake_minimum_required(VERSION 3.27)
project(advent_of_code_2023_c C)

set(CMAKE_C_STANDARD 11)

add_executable(advent_of_code_2023_c main.c
        file-opener.c
        file-opener.h)
