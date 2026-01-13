#!/bin/bash

# 获取当前脚本的目录
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)

echo "--------------------"
echo "script dir: ${DIR}"

echo "--------------------"
echo "current dir: $(pwd)" 

PROJECT_NAME="$1"
echo "--------------------"
echo "project name: ${PROJECT_NAME}" 

TARGET_PATH="${DIR}/${PROJECT_NAME}"
echo "--------------------"
echo "generate path: ${TARGET_PATH}" 

CMAKE_FILE="${TARGET_PATH}/CMakeLists.txt"
echo "--------------------"
echo "generate file: ${CMAKE_FILE}" 

mkdir -p "${DIR}/${PROJECT_NAME}"
cat << EOF > "${CMAKE_FILE}"
add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PRIVATE
    test.cpp
    answer.cpp
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})
EOF

echo "generate success!"
echo ""

echo "--------------------"
echo "generate cpp file..."

