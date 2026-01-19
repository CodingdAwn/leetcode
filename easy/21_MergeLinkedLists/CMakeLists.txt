add_executable(21_MergeLinkedLists)

target_sources(21_MergeLinkedLists
  PRIVATE
    test.cpp
)

target_link_libraries(21_MergeLinkedLists
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(21_MergeLinkedLists)
