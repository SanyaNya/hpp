cmake_minimum_required(VERSION 3.31)

project(hpp VERSION 1.8.0)

#Require C++23 without compiler extensions
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(hpp INTERFACE)
target_include_directories(hpp INTERFACE ${hpp_SOURCE_DIR}/include)
