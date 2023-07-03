cmake_minimum_required(VERSION 3.14)

project(libCPP_Cronometro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(libCPP_Cronometro SHARED
  libCPP_Cronometro_global.h
  cronometro.cpp
  cronometro.h
)

target_compile_definitions(libCPP_Cronometro PRIVATE LIBCPP_CRONOMETRO_LIBRARY)
