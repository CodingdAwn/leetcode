add_executable(138_CopyListwithRandomPointer)

target_sources(138_CopyListwithRandomPointer
  PRIVATE
    test.cpp
)

target_link_libraries(138_CopyListwithRandomPointer
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(138_CopyListwithRandomPointer)
