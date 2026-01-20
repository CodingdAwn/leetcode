/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.17
 * Purposes: 206-easy-reverse linked list
 * https://leetcode.com/problems/reverse-linked-list/description/
 */

#pragma once
#include "common.h"

namespace iterate
{

class Solution
{
public:
  // prev - cur - tmp
  ListNode* reverseList(ListNode* head)
  {
    if (head == nullptr) return nullptr;

    ListNode* prev = nullptr;
    ListNode* cur = head;
    ListNode* tmp = nullptr;
    while (cur)
    {
      tmp = cur->next;
      cur->next = prev;
      prev = cur;
      cur = tmp;
    }

    return prev;
  }
};

}; // namespace iterate
