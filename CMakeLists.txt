cmake_minimum_required (VERSION 2.8.11)
project (Calc_package)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# set header files
set(headers 
	include/add.h
	include/mul.h)

# set source files
set(sources src/calc.c)

add_library (cal_cpp SHARED
  ${sources}
  ${headers}
)

install(TARGETS Calc_package DESTINATION bin)
install(FILES ${headers} DESTINATION include/Calc_package)
