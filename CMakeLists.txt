cmake_minimum_required(VERSION 3.28)
project(Constanza_hash C)

set(CMAKE_C_STANDARD 11)

add_executable(Constanza_hash main.c
        hash.c
        hash.h)
