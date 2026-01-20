#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(Solution, isPalindrome)
{
  Solution s;
  vector<int> input{1, 2, 2, 1};
  ListNode* head = ConvertListNode(input);
  EXPECT_EQ(s.isPalindrome(head), true);
}

TEST(failed1, isPalindrome)
{
  Solution s;
  vector<int> input{1, 1, 2, 1};
  ListNode* head = ConvertListNode(input);
  EXPECT_EQ(s.isPalindrome(head), false);
}
