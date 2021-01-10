cmake_minimum_required(VERSION 3.17)
project(c_programming_language C)

set(CMAKE_C_STANDARD 99)

add_executable(c_programming_language basis/hello.c)

add_executable(2 basis/exercise/e2.c)

add_executable(temperature basis/temperature.c)

add_executable(temperature_2 basis/temperature_2.c)

add_executable(e3 basis/exercise/e3.c)

add_executable(e4 basis/exercise/e4.c)

add_executable(temperature_3 basis/temperature_3.c)

add_executable(e5 basis/exercise/e5.c)

add_executable(symbolic_constant basis/symbolic_constant.c)

add_executable(text_copy basis/text_copy.c)

add_executable(text_copy_2 basis/text_copy_2.c)

add_executable(e6 basis/exercise/e6.c)

add_executable(e7 basis/exercise/e7.c)
