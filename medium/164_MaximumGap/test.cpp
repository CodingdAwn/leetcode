#include "answer.h"
#include <gtest/gtest.h>
#include <vector>

TEST(Solution, maximumGap)
{
  Solution s;
  vector<int> inputs{3, 6, 9, 1};
  int result = s.maximumGap(inputs);

  EXPECT_EQ(result, 3);
}
