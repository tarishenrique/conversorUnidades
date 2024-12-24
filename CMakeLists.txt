cmake_minimum_required(VERSION 3.23)
project(conversorUnidades C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(conversorUnidades
        dados.c
        dados.h
        potencia.c
        potencia.h
        comprimento.c
        comprimento.h
        main.c)
