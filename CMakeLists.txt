cmake_minimum_required(VERSION 3.5)

project(leetcode)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)

# first import common lib 
add_subdirectory(common_lib)

# 2020-06-19
add_subdirectory(125_验证回文字符串_easy)
# 2020-06-20
add_subdirectory(10_正则表达式匹配_hard)
# 2020-06-21
add_subdirectory(124_二叉树中的最大路径和_hard)
# 2020-06-23
add_subdirectory(67_二进制求和_easy)
# 2020-06-24
add_subdirectory(16_最接近的三数之和_medium)
# 2020-06-26
add_subdirectory(temp_移除重复点_easy)
# 2020-06-26
add_subdirectory(1_两数之和_easy)
# 2020-06-27
add_subdirectory(41_缺失的第一个正数_hard)
# 2020-06-28
add_subdirectory(209_长度最小的子数组_medium)
# 2020-06-29
add_subdirectory(215_数组中的第K个最大元素_medium)
# 2020-06-30
add_subdirectory(09_剑指offer_用两个栈实现队列_easy)
# 2020-07-01
add_subdirectory(718_最长重复子数组_medium)
# 2020-07-03
add_subdirectory(378_有序矩阵中第K小的元素_medium)
# 2020-07-04
add_subdirectory(32_最长有效括号_hard)
# 2020-07-04
add_subdirectory(108_将有序数组转换为二叉搜索树_easy)
# 2020-07-06
add_subdirectory(63_不同路径II_medium)
# 2020-07-07
add_subdirectory(112_路径总和_easy)
# 2020-07-13
add_subdirectory(350_两个数组的交集II_easy)
# 2020-07-15
add_subdirectory(120_三角形最小路径和_medium)
# 2020-07-17
add_subdirectory(35_搜索插入位置_easy)
# 2020-07-20
add_subdirectory(167_两数之和II-输入有序数组_easy)
# 2020-07-23
add_subdirectory(11_剑指offer_旋转数组的最小数字_easy)
# 2020-07-23
add_subdirectory(64_最小路径和_medium)

# copy compile_commands.json to source dir
add_custom_target(copy_compile ALL
  ${CMAKE_COMMAND} -E copy_if_different
  ${CMAKE_BINARY_DIR}/compile_commands.json
  ${CMAKE_SOURCE_DIR}
  )
