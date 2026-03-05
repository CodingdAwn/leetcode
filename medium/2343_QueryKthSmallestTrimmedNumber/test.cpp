#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

TEST(Solution, smallestTrimmedNumbers)
{
  Solution s;
  vector<string> inputs{"102", "473", "251", "814"};
  vector<vector<int>> queries{{1, 1}, {2, 3}, {4, 2}, {1, 2}};

  auto result = s.smallestTrimmedNumbers(inputs, queries);
  EXPECT_EQ(to_string(result), "[2,2,1,0]");
}
