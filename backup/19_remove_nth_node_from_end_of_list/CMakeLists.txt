add_executable(19_remove_nth_node_from_end_of_list)

target_sources(19_remove_nth_node_from_end_of_list
  PRIVATE
    test.cpp
)

target_link_libraries(19_remove_nth_node_from_end_of_list
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(19_remove_nth_node_from_end_of_list)
