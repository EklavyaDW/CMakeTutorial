#Always add this line at start of CMakeLists.txt mentioning about 
#cmake version alerting user what is minimum version he should use 
cmake_minimum_required(VERSION 3.21.1)

#mention project name using this below line
project(CMake_Tutorial)

#Using this function we are mentioning 
#where header files can be found.

include_directories(mathLib)

#Using below function to add executable to project.
#add_executable("output file" "input files to create output file")

add_executable(CMakeTut main.cpp)

#Link our libraries with target i.e.CMakeTut(executable) with ur lib
#Here I'm linking my lib calc with CMakeTut

target_link_libraries(CMakeTut calc)


#Add the subdirectory for the library which we have created 
#Now adding is necessory as we have moved adding library to target into tht folder

add_subdirectory(mathLib)