add_executable(21_MergeTwoSortedLists)

target_sources(21_MergeTwoSortedLists
  PRIVATE
    test.cpp
)

target_link_libraries(21_MergeTwoSortedLists
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(21_MergeTwoSortedLists)
