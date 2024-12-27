cmake_minimum_required(VERSION 3.23)
cmake_policy(VERSION 3.23)

project(conversorUnidades
        VERSION 1.0
        DESCRIPTION "Um conversor de unidades simples escrito em C"
        LANGUAGES C)

set(CMAKE_C_STANDARD 11)

set(SOURCES
        area.c
        comprimento.c
        dados.c
        massa.c
        potencia.c
        temperatura.c
        tempo.c
        velocidade.c
        volume.c
        main.c)

set(HEADERS
        area.h
        comprimento.h
        dados.h
        massa.h
        potencia.h
        temperatura.h
        tempo.h
        velocidade.h
        volume.h)

add_executable(conversorUnidades ${SOURCES} ${HEADERS})

# Ativar warnings adicionais
target_compile_options(conversorUnidades PRIVATE -Wall -Wextra -pedantic)

# Separar arquivos em grupos no IDE
source_group("Headers" FILES ${HEADERS})
source_group("Sources" FILES ${SOURCES})
