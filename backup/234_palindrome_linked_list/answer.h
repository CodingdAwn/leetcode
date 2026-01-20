/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.18
 * Purposes: 234-easy-palindrome linked list
 * https://leetcode.com/problems/palindrome-linked-list/description/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  // reverse
  bool isPalindrome(ListNode* head)
  {
    if (head == nullptr) return false;
    if (head->next == nullptr) return true;

    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next)
    {
      slow = slow->next;
      fast = fast->next->next;
    }

    // slow point to medium
    ListNode* prev = nullptr;
    ListNode* cur = slow;
    ListNode* tmp = nullptr;

    // reverse list after medium node
    while (cur)
    {
      tmp = cur->next;
      cur->next = prev;
      prev = cur;
      cur = tmp;
    }

    while (prev && head)
    {
      if (prev->val != head->val) return false;
      prev = prev->next;
      head = head->next;
    }

    return true;
  }
};
