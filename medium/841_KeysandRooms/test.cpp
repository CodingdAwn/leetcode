#include "answer.h"
#include <gtest/gtest.h>
#include <vector>

TEST(Solution, canVisitAllRooms)
{
  Solution s;
  vector<vector<int>> inputs{{1, 3}, {3, 0, 1}, {2}, {}};
  bool result = s.canVisitAllRooms(inputs);
  EXPECT_EQ(result, false);
}
