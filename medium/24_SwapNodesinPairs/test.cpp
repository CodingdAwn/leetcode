#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

TEST(Solution, swapPairs)
{
  Solution s;
  vector<int> inputs{1, 2, 3, 4};
  ListNode* head = ConvertListNode(inputs);
  ListNode* result = s.swapPairs(head);
  EXPECT_EQ(to_string(result), "[2,1,4,3]");
}
