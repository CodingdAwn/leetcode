#include "first_blood.h"
#include "dummy_node.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(first, removeElements)
{
  first_blood::Solution s;
  std::vector<int> input{1, 2, 6, 3, 4, 5, 6};
  ListNode* head = ConvertListNode(input);
  ListNode* res = s.removeElements(head, 6);
  EXPECT_EQ(to_string(res), "[1,2,3,4,5]");
}

TEST(dummy_node, removeElements)
{
  dummy_node::Solution s;
  std::vector<int> input{1, 2, 6, 3, 4, 5, 6};
  ListNode* head = ConvertListNode(input);
  ListNode* res = s.removeElements(head, 6);
  EXPECT_EQ(to_string(res), "[1,2,3,4,5]");
}
