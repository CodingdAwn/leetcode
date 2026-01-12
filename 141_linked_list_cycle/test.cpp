#include <gtest/gtest.h>
#include "common.h"
#include "answer.h"

TEST(Solution, hasCycle)
{
  Solution s;
  ListNode* head;
  EXPECT_EQ(s.hasCycle(head), true);
}
