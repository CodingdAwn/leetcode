#include "diff_length.h"
#include "two_pointer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

std::vector<ListNode*> initList()
{
  std::vector<int> inputA{4, 1};
  std::vector<int> inputB{5, 6, 1};

  ListNode* headA = ConvertListNode(inputA);
  ListNode* headB = ConvertListNode(inputB);

  // 构建相同的结尾
  ListNode* tailA = nullptr;
  ListNode* it = headA;
  while (it)
  {
    tailA = it;
    it = it->next;
  }

  ListNode* tailB = nullptr;
  it = headB;
  while (it)
  {
    tailB = it;
    it = it->next;
  }

  std::vector<int> inputT{8, 4, 5};
  ListNode* tails = ConvertListNode(inputT);
  tailA->next = tails;
  tailB->next = tails;

  std::vector<ListNode*> result{headA, headB, tails};
  return result;
}

TEST(diff_length, getIntersectionNode)
{
  diff_length::Solution s;

  std::vector<ListNode*> result = initList();
  ListNode* headA = result[0];
  ListNode* headB = result[1];
  ListNode* tails = result[2];

  EXPECT_EQ(s.getIntersectionNode(headA, headB), tails);
}


TEST(two_pointer, getIntersectionNode)
{
  two_pointer::Solution s;

  std::vector<ListNode*> result = initList();
  ListNode* headA = result[0];
  ListNode* headB = result[1];
  ListNode* tails = result[2];

  EXPECT_EQ(s.getIntersectionNode(headA, headB), tails);
}
