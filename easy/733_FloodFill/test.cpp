#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(Solution, floodFill)
{
  Solution s;
  vector<vector<int>> image{{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
  auto result = s.floodFill(image, 1, 1, 2);
  EXPECT_EQ(to_string(result), "[[2,2,2],[2,2,0],[2,0,1]]");
}
