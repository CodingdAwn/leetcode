#include <gtest/gtest.h>
#include <vector>
#include "answer.h"
#include "common.h"

using namespace std;

TEST(Solution, mergeTwoLists)
{
  Solution s;
  vector<int> input1{1,2,4};
  vector<int> input2{1,3,4};

  ListNode* list1 = ConvertListNode(input1);
  ListNode* list2 = ConvertListNode(input2);

  ListNode* res = s.mergeTwoLists(list1, list2);
  EXPECT_EQ(to_string(res), "[1,1,2,3,4,4]");
}

