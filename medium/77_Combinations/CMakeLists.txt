add_executable(77_Combinations)

target_sources(77_Combinations
  PRIVATE
    test.cpp
)

target_link_libraries(77_Combinations
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(77_Combinations)
