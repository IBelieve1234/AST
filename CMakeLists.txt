cmake_minimum_required(VERSION 3.12)
project(AST)

set(CMAKE_CXX_STANDARD 14)

add_executable(AST main.cpp Pretreatment.cpp Pretreatment.h Delete_redundant_information.h Delete_redundant_information.cpp)