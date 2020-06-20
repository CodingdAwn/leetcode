cmake_minimum_required(VERSION 3.5) 
project(common)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/../)

add_library(common SHARED common.cpp)

target_include_directories(common 
  PUBLIC ${PROJECT_SOURCE_DIR})

#install(TARGETS common LIBRARY DESTINATION lib)
#install(FILES commonConfig.cmake DESTINATION lib/cmake/)

