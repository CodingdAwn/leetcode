add_executable(142_linked_list_cycle_2)

target_sources(142_linked_list_cycle_2
  PRIVATE
    test.cpp
)

target_link_libraries(142_linked_list_cycle_2
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(142_linked_list_cycle_2)
