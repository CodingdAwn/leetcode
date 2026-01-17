cmake_minimum_required(VERSION 4.2)

project(leetcode)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the installed GTest package
find_package(GTest REQUIRED)

# Enable CTest intigration
enable_testing()

# first import common lib
add_subdirectory(common_lib)

# 2026-01-12 gtests
add_subdirectory(gtest)

# 2026-01-10 Easy
add_subdirectory(141_linked_list_cycle)

# 2026-01-13 Easy
add_subdirectory(142_linked_list_cycle_2)

# 2026-01-14 Easy
add_subdirectory(160_intersection_of_two_linked_lists)

# 2026-01-17 Medium
add_subdirectory(19_remove_nth_node_from_end_of_list)

# copy compile_commands.json to source dir
add_custom_target(copy_compile ALL
  ${CMAKE_COMMAND} -E copy_if_different
  ${CMAKE_BINARY_DIR}/compile_commands.json
  ${CMAKE_SOURCE_DIR}
  )
