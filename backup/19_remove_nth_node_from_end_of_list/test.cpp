#include "gtest/gtest.h"
#include <gtest/gtest.h>
#include <vector>
#include "answer.h"
#include "common.h"

using namespace std;

TEST(Solution, removeNthFromEnd)
{
  Solution s; 
  std::vector<int> input{1,2,3,4,5};
  ListNode* head = ConvertListNode(input);
  int n = 2;
  ListNode* res = s.removeNthFromEnd(head, n);
  EXPECT_EQ(to_string(res), "[1,2,3,5]");
}

