cmake_minimum_required(VERSION 3.8)
project(my_cpp_training)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp util/ContrainerUtils.cpp classes/Examples.cpp classes/Person.cpp classes/Person.h pointers/PointersArithmatic.cpp classes/Object.cpp classes/Object.h classes/Animal.cpp classes/Animal.h classes/Vector.cpp classes/Vector.h bussiness-layer/user.cpp util/Out.cpp util/Out.h classes/Container.cpp classes/Container.h classes/Vector_container.cpp classes/Vector_container.h)
add_executable(my_cpp_training ${SOURCE_FILES})