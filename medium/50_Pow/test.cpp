#include <gtest/gtest.h>
#include "answer.h"

TEST(Solution, myPow)
{
  Solution s;
  double result = s.myPow(2.0, 10);
  EXPECT_EQ(result, 1024.0);

  //result = s.myPow(2.1, 3);
  //EXPECT_EQ(result, 9.261);

  //result = s.myPow(2.1, 3);
  //EXPECT_EQ(result, 9.261);
}

