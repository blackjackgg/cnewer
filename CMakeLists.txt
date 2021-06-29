cmake_minimum_required(VERSION 3.19)
project(cnewer C)

set(CMAKE_C_STANDARD 99)



link_directories(lib)

add_executable(cnewer main.c)

target_link_libraries(cnewer  libuntitled4)
target_link_libraries(cnewer  libuntitled3.a)