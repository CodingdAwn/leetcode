add_executable(61_RotateList)

target_sources(61_RotateList
  PRIVATE
    test.cpp
)

target_link_libraries(61_RotateList
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(61_RotateList)
