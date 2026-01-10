cmake_minimum_required(VERSION 4.2)

project(leetcode)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)

# first import common lib
add_subdirectory(common_lib)

# 2026-01-06
add_subdirectory(test)

# 2026-01-10
add_subdirectory(141_linked_list_cycle)

# copy compile_commands.json to source dir
add_custom_target(copy_compile ALL
  ${CMAKE_COMMAND} -E copy_if_different
  ${CMAKE_BINARY_DIR}/compile_commands.json
  ${CMAKE_SOURCE_DIR}
  )
