add_executable(1200_MinimumAbsoluteDifference)

target_sources(1200_MinimumAbsoluteDifference
  PRIVATE
    test.cpp
)

target_link_libraries(1200_MinimumAbsoluteDifference
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(1200_MinimumAbsoluteDifference)
