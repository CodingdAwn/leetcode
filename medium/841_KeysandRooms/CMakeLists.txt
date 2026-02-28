add_executable(841_KeysandRooms)

target_sources(841_KeysandRooms
  PRIVATE
    test.cpp
)

target_link_libraries(841_KeysandRooms
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(841_KeysandRooms)
