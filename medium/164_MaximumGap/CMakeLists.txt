add_executable(164_MaximumGap)

target_sources(164_MaximumGap
  PRIVATE
    test.cpp
)

target_link_libraries(164_MaximumGap
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(164_MaximumGap)
