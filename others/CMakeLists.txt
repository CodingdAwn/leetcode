add_executable(others)

target_sources(others
  PRIVATE
    test.cpp
)

target_link_libraries(others
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(others)
