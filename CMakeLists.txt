cmake_minimum_required(VERSION 3.16)
project(Cpp20Jest)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(OUTPUT_DIR "out")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

add_executable(Cpp20Jest main.cpp animal.cpp animal.h dog.cpp dog.h sheep.cpp sheep.h cat.cpp cat.h animaltype.h)
