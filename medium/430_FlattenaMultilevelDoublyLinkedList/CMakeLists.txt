add_executable(430_FlattenaMultilevelDoublyLinkedList)

target_sources(430_FlattenaMultilevelDoublyLinkedList
  PRIVATE
    test.cpp
)

target_link_libraries(430_FlattenaMultilevelDoublyLinkedList
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(430_FlattenaMultilevelDoublyLinkedList)
