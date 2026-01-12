# Add your test executable
add_executable(test_gtest main.cpp)

# Link against the imported GTest targets
target_link_libraries(test_gtest
  PRIVATE 
    GTest::gtest 
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_gtest)
