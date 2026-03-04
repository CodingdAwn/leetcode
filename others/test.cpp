#include "test.h"
#include "common.h"
#include <gtest/gtest.h>

TEST(TestCommonLib, coutingsort)
{
  TestCommonLib t;
  vector<int> inputs{5, 4, 5, 5, 1, 1, 3};
  t.test_counting_sort(inputs);
  EXPECT_EQ(to_string(inputs), "[1,1,3,4,5,5,5]");
}

TEST(TestCommonLib, radixsort)
{
  TestCommonLib t;
  vector<int> inputs{831, 443, 256, 336, 736, 907};
  t.test_radix_sort(inputs);
  EXPECT_EQ(to_string(inputs), "[256,336,443,736,831,907]");
}
