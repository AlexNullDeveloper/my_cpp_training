cmake_minimum_required(VERSION 3.8)
project(my_cpp_training)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp util/ContrainerUtils.cpp day1stuff/Examples.cpp day1stuff/Person.cpp day1stuff/Person.h pointers/PointersArithmatic.cpp day1stuff/Object.cpp day1stuff/Object.h day1stuff/Animal.cpp day1stuff/Animal.h)
add_executable(my_cpp_training ${SOURCE_FILES})