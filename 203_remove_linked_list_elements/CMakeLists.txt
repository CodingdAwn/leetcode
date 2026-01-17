add_executable(203_remove_linked_list_elements)

target_sources(203_remove_linked_list_elements
  PRIVATE
    test.cpp
)

target_link_libraries(203_remove_linked_list_elements
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(203_remove_linked_list_elements)
