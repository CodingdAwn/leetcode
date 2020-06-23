cmake_minimum_required(VERSION 3.5)

project(leetcode)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)

# first import common lib 
add_subdirectory(common_lib)

# 2020-06-19
add_subdirectory(125_验证回文字符串)
# 2020-06-20
add_subdirectory(10_正则表达式匹配)
# 2020-06-21
add_subdirectory(124_二叉树中的最大路径和)
# 2020-06-23
add_subdirectory(67_二进制求和)
# copy compile_commands.json to source dir
add_custom_target(copy_compile ALL
  ${CMAKE_COMMAND} -E copy_if_different
  ${CMAKE_BINARY_DIR}/compile_commands.json
  ${CMAKE_SOURCE_DIR}
  )
