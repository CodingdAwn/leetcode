add_executable(141_linked_list_cycle)

target_sources(141_linked_list_cycle
  PRIVATE
    test.cpp
)

target_link_libraries(141_linked_list_cycle
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(141_linked_list_cycle)
