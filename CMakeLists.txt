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

# 生成规则改了，目录结构也变了，所以把之前的放这里把
add_subdirectory(backup)

# easy
add_subdirectory(easy)

# copy compile_commands.json to source dir
add_custom_target(copy_compile ALL
  ${CMAKE_COMMAND} -E copy_if_different
  ${CMAKE_BINARY_DIR}/compile_commands.json
  ${CMAKE_SOURCE_DIR}
  )
