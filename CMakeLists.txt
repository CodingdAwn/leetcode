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

# 2026-01-10 Easy
add_subdirectory(141_linked_list_cycle)

# 2026-01-13 Easy
add_subdirectory(142_linked_list_cycle_2)

# 2026-01-14 Easy
add_subdirectory(160_intersection_of_two_linked_lists)

# 2026-01-16 Medium
add_subdirectory(19_remove_nth_node_from_end_of_list)

# 2026-01-17 easy
add_subdirectory(206_reverse_linked_list)

# 2026-01-17 easy
add_subdirectory(203_remove_linked_list_elements)

# 2026-01-17 medium
add_subdirectory(328_odd_even_linked_list)

# 2026-01-18 easy
add_subdirectory(234_palindrome_linked_list)

# 2026-01-19
add_subdirectory(easy/21_MergeLinkedLists)

# copy compile_commands.json to source dir
add_custom_target(copy_compile ALL
  ${CMAKE_COMMAND} -E copy_if_different
  ${CMAKE_BINARY_DIR}/compile_commands.json
  ${CMAKE_SOURCE_DIR}
  )
