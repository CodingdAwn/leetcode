add_executable(206_reverse_linked_list)

target_sources(206_reverse_linked_list
  PRIVATE
    test.cpp
)

target_link_libraries(206_reverse_linked_list
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(206_reverse_linked_list)
