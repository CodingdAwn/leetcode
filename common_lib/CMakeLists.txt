cmake_minimum_required(VERSION 4.2)

add_library(common)

target_sources(common
  PRIVATE
    common.cpp
    sort.cpp
  PUBLIC
    FILE_SET HEADERS
    FILES
        common.h
        sort.h
)
