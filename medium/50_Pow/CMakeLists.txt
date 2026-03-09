add_executable(50_Pow)

target_sources(50_Pow
  PRIVATE
    test.cpp
)

target_link_libraries(50_Pow
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(50_Pow)
