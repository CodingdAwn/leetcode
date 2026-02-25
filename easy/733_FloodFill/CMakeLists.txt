add_executable(733_FloodFill)

target_sources(733_FloodFill
  PRIVATE
    test.cpp
)

target_link_libraries(733_FloodFill
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(733_FloodFill)
