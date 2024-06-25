cmake_minimum_required(VERSION 3.28)
project(creditCardGenerator)

set(CMAKE_CXX_STANDARD 17)

add_executable(creditCardGenerator main.cpp
        generate.cpp
        generate.h
        menu.cpp
        menu.h)
