add_executable(24_SwapNodesinPairs)

target_sources(24_SwapNodesinPairs
  PRIVATE
    test.cpp
)

target_link_libraries(24_SwapNodesinPairs
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(24_SwapNodesinPairs)
