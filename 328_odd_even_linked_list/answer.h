/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.17
 * Purposes: 328-medium-odd even linked list
 * https://leetcode.com/problems/odd-even-linked-list/description/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  ListNode* oddEvenList(ListNode* head)
  {
    if (head == nullptr || head->next == nullptr) return head;

    ListNode* odd = head;
    ListNode* even= head->next;
    ListNode* even_head = even;
    while (even && even->next)
    {
      odd->next = even->next;
      odd = odd->next;

      even->next = even->next->next;
      even = even->next;
    }
    odd->next = even_head;
    return head;
  }
};
