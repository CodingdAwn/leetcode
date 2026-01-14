#include <gtest/gtest.h>
#include "answer.h"
#include "common.h"

using namespace std;

TEST(Solution, detectCycle) 
{
  Solution s;
  std::vector<int> input{3,2,0,-4};
  ListNode* head = ConvertListNode(input);
  // 需要做成环形
  ListNode* it = head;
  ListNode* cycle_entry = head->next;
  while (it->next) {
    it = it->next;
    cout << "head: " << it->val << endl;
  }
  it->next = cycle_entry;
  EXPECT_EQ(s.detectCycle(head), cycle_entry);
}
