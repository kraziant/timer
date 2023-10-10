# Set the minimum version of CMake that can be used To find the cmake version
# run $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project(timer_example)

# Add an executable
add_executable(timer_example example/example.cpp)

target_include_directories(timer_example PRIVATE ${PROJECT_SOURCE_DIR}/include)
