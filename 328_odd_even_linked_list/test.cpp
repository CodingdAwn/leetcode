#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(Solution, oddEvenList)
{
  Solution s;
  vector<int> input{1, 2, 3, 4, 5};
  ListNode* head = ConvertListNode(input);
  ListNode* res = s.oddEvenList(head);
  EXPECT_EQ(to_string(res), "[1,3,5,2,4]");
}
