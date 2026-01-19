#!/bin/bash

# 获取当前脚本的目录
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" &> /dev/null && pwd)

echo "--------------------"
echo "script dir: ${DIR}"

#echo "--------------------"
#echo "current dir: $(pwd)" 

DIFFICULTY=""
CONTENT=""

while getopts ":d:c:" opt; do
  case $opt in
    d) 
      DIFFICULTY=$OPTARG
      ;;
    c)
      CONTENT=$OPTARG
      ;;
    \?)
      echo "invalid argument: $OPTARG"
      exit 1
      ;;
  esac
done

if [[ -z $DIFFICULTY ]] || [[ -z $CONTENT ]]; then
  echo "usage: $0 -d [easy|medium|hard] -c \"题目编号. 题目名称\" "
fi

ID=$(echo ${CONTENT} | sed "s/^\([0-9]*\).*/\1/")
NAME=$(echo ${CONTENT} | sed "s/^[0-9.]*//; s/ //g")

if [[ ${$ID} -gt 10 ]]; then
  echo "ID is too long"
  exit 1
fi
if [[ ${$NAME} -gt 100 ]]; then
  echo "Name is too long"
  exit 1
fi

PROJECT_NAME="${ID}_${NAME}"
TARGET_PATH="${DIR}/${DIFFICULTY}/${PROJECT_NAME}"
echo "------------------------------"
echo "Difficulty: ${DIFFICULTY}"
echo "No.${ID}"
echo "Name: ${PROJECT_NAME}"
echo "Path: ${TARGET_PATH}"
echo "------------------------------"
echo ""

#----------------------------
# generate code
if [[ -d ${TARGET_PATH} ]]; then
  echo "path:{TARGET_PATH} is already exist!"
  exit
fi

mkdir -p "${TARGET_PATH}"

CMAKE_FILE="${TARGET_PATH}/CMakeLists.txt"
cat << EOF > "${CMAKE_FILE}"
add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
  PRIVATE
    test.cpp
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

# generate answer.h
HEADER="${TARGET_PATH}/answer.h"
cat << EOF > "${HEADER}"
TODO file header
#pragma once
#include "common.h"

TODO copy leetcode problem
EOF

# generate test.cpp
TEST="${TARGET_PATH}/test.cpp"
cat << EOF > "${TEST}"
#include <gtest/gtest.h>
#include "answer.h"

using namespace std;

TEST(Solution, somefunction)
{
  
}

EOF

echo "------------------------------"
TEST="${TARGET_PATH}/test.cpp"
echo "CMakeFile generated: ${CMAKE_FILE}"
echo "Header File generated: ${HEADER}"
echo "gtest File generated: ${TEST}"
echo "------------------------------"
echo ""
echo "generate success!"
