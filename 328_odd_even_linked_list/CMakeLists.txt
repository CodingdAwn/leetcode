add_executable(328_odd_even_linked_list)

target_sources(328_odd_even_linked_list
  PRIVATE
    test.cpp
)

target_link_libraries(328_odd_even_linked_list
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(328_odd_even_linked_list)
