cmake_minimum_required(VERSION 3.17)
project(exclamake)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(org)
# Including Executive Dir


# Adding Sample Scripts
add_executable(SAMPLEDIR sample.cpp)