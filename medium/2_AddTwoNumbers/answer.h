/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-01-20
 * Problem : 2-medium-Add Two Numbers
 * Link    : https://leetcode.com/problems/add-two-numbers/description/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
  {
    ListNode* dummy = new ListNode(0);
    ListNode* head = dummy;
    int sum = 0, carry = 0;
    
    while (l1 || l2)
    {
      sum = carry;
      // 这里直接使用原list,减少new的次数，题目并没有要求不能修改，如不能修改new即可
      dummy->next = l1 ? l1 : l2;
      if (l1)
      {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2)
      {
        sum += l2->val;
        l2 = l2->next;
      }
      carry = sum / 10;

      dummy->next->val = 0;
      dummy->next->val += sum % 10;
      dummy = dummy->next;
    }

    if (carry)
      dummy->next = new ListNode(1);

    dummy = head->next;
    delete head;

    return dummy;
  }
};
