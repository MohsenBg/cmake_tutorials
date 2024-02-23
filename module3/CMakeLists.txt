cmake_minimum_required(VERSION 3.0.0)

project(Calculator_Project VERSION 1.0.0)

add_subdirectory()

add_library(my_math
./src/addition.cpp
./src/division.cpp
)

add_library(
  my_print
  ./src/print_result.cpp
  )

add_executable(calculator main.cpp)

target_link_libraries(calculator my_math my_print)

