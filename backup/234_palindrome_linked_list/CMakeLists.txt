add_executable(234_palindrome_linked_list)

target_sources(234_palindrome_linked_list
  PRIVATE
    test.cpp
)

target_link_libraries(234_palindrome_linked_list
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(234_palindrome_linked_list)
