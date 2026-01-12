#include "answer.h"

// 关键在于双指针(快慢指针)并理解怎么才能算是有环
// 如果是一条直接，那么快指针永远都不会追上慢指针
bool Solution::hasCycle(ListNode* head)
{
    if (head == nullptr) return false;

    ListNode* slow = head;
    ListNode* fast = head;

    // 因为fast更快，所以肯定是fast先到终点
    while (fast && fast->next)
    {
      if (fast->next == slow)
      {
        return true;
      }
      slow = slow->next;
      fast = fast->next->next;
    }
    return false;
}
