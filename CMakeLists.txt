cmake_minimum_required(VERSION 3.25)
project(cpp_playground)

set(CMAKE_CXX_STANDARD 17)

# Find Eigen installed via apt in Docker
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})

add_executable(cpp_playground
        src/main.cpp
        src/rotate.cpp
)

target_include_directories(cpp_playground PRIVATE include)
