cmake_minimum_required (VERSION 2.8.11)
project (calc)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# set header files
set(headers 
	include/add.h
	include/mul.h)

# set source files
set(sources src/add.cpp)

add_library (cal_cpp SHARED
  ${sources}
  ${headers}
)