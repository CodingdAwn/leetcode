add_executable(37_SudokuSolver)

target_sources(37_SudokuSolver
  PRIVATE
    test.cpp
)

target_link_libraries(37_SudokuSolver
  PRIVATE
    common
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(37_SudokuSolver)
