cmake_minimum_required(VERSION 3.13)
project(forth_cpp_linux)

set(CMAKE_CXX_STANDARD 17)

add_executable(forth_cpp_linux main.cpp lib/Forth/Word/Word.cpp lib/Forth/Word/Word.h lib/Forth/Word/PlusWord.cpp lib/Forth/Word/PlusWord.h lib/Forth/ForthEvaluator.cpp lib/Forth/ForthEvaluator.h)