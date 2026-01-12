cmake_minimum_required(VERSION 4.2)
project(test_gtest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable CTest intigration
enable_testing()

# Find the installed GTest package
find_package(GTest REQUIRED)

# Add your test executable
add_executable(test_gtest main.cpp)


# Link against the imported GTest targets
target_link_libraries(test_gtest
  PRIVATE 
    GTest::gtest GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_gtest)
