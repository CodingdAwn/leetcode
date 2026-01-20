#include "iterate.h"
#include "recursion.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(iterate, reverseList)
{
  iterate::Solution s;
  std::vector<int> input{1, 2, 3, 4, 5};
  ListNode* head = ConvertListNode(input);
  ListNode* res = s.reverseList(head);
  EXPECT_EQ(to_string(res), "[5,4,3,2,1]");
}

TEST(recursion, reverseList)
{
  recursion::Solution s;
  std::vector<int> input{1, 2, 3, 4, 5};
  ListNode* head = ConvertListNode(input);
  ListNode* res = s.reverseList(head);
  EXPECT_EQ(to_string(res), "[5,4,3,2,1]");
}
