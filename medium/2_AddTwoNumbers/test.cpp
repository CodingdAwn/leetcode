#include <gtest/gtest.h>
#include <vector>
#include "answer.h"
#include "common.h"

using namespace std;

TEST(Solution, addTwoNumbers)
{
  Solution s;
  vector<int> input1{2,4,3};
  vector<int> input2{5,6,4};

  ListNode* l1 = ConvertListNode(input1);
  ListNode* l2 = ConvertListNode(input2);

  ListNode* res = s.addTwoNumbers(l1, l2);
  EXPECT_EQ(to_string(res), "[7,0,8]");
}

TEST(Solution, addTwoNumbers2)
{
  Solution s;
  vector<int> input1{0};
  vector<int> input2{0};

  ListNode* l1 = ConvertListNode(input1);
  ListNode* l2 = ConvertListNode(input2);

  ListNode* res = s.addTwoNumbers(l1, l2);
  EXPECT_EQ(to_string(res), "[0]");
}

TEST(Solution, addTwoNumbers3)
{
  Solution s;
  vector<int> input1{9,9,9};
  vector<int> input2{9,9};

  ListNode* l1 = ConvertListNode(input1);
  ListNode* l2 = ConvertListNode(input2);

  ListNode* res = s.addTwoNumbers(l1, l2);
  EXPECT_EQ(to_string(res), "[8,9,0,1]");
}
