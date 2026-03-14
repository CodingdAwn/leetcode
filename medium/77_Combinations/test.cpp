#include <gtest/gtest.h>
#include "answer.h"
#include "common.h"

TEST(Solution, combine)
{
  Solution s;
  auto result = s.combine(4, 2);
  EXPECT_EQ(to_string(result), "[[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]");
}
