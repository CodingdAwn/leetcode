add_executable(160_intersection_of_two_linked_lists)

target_sources(160_intersection_of_two_linked_lists
  PRIVATE
    test.cpp
)

target_link_libraries(160_intersection_of_two_linked_lists
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(160_intersection_of_two_linked_lists)
