cmake_minimum_required(VERSION 3.5)

project(leetcode_167)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} common)
#target_include_directories(${PROJECT_NAME} common_INCLUDE_DIR)
