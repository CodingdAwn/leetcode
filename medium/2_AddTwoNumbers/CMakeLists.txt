add_executable(2_AddTwoNumbers)

target_sources(2_AddTwoNumbers
  PRIVATE
    test.cpp
)

target_link_libraries(2_AddTwoNumbers
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(2_AddTwoNumbers)
