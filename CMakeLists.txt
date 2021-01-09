cmake_minimum_required(VERSION 3.17)
project(c_programming_language C)

set(CMAKE_C_STANDARD 99)

add_executable(c_programming_language basis/hello.c)

add_executable(2 basis/exercise/2.c)

add_executable(temperature basis/temperature.c)

add_executable(temperature_2 basis/temperature_2.c)
