add_executable(2343_QueryKthSmallestTrimmedNumber)

target_sources(2343_QueryKthSmallestTrimmedNumber
  PRIVATE
    test.cpp
)

target_link_libraries(2343_QueryKthSmallestTrimmedNumber
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(2343_QueryKthSmallestTrimmedNumber)
