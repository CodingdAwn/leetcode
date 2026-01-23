#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(Solution, rotateRight)
{
  Solution s;
  vector<int> input{1, 2, 3, 4, 5};
  int k = 2;
  ListNode* head = ConvertListNode(input);
  ListNode* res = s.rotateRight(head, k);
  EXPECT_EQ(to_string(res), "[4,5,1,2,3]");
}
