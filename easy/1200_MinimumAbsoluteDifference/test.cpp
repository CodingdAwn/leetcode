#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

TEST(Solution, minimumAbsDifference)
{
  Solution s;
  vector<int> intput{{4, 2, 1, 3}};
  auto res = s.minimumAbsDifference(intput);
  EXPECT_EQ(to_string(res), "[[1,2],[2,3],[3,4]]");
}
