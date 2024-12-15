cmake_minimum_required(VERSION 3.30)
project(spacephysics)

set(CMAKE_CXX_STANDARD 20)

set(SRC_LIST
        src/main.cpp
        src/simulation/gravity.h
        src/simulation/particle.cpp
)

add_executable(spacephysics ${SRC_LIST})
