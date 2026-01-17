/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.17
 * Purposes: 206-easy-reverse linked list
 * https://leetcode.com/problems/reverse-linked-list/description/
 */

#pragma once
#include "common.h"

namespace recursion
{

class Solution
{
public:
  ListNode* reverse(ListNode* cur, ListNode* prev)
  {
    if (cur == nullptr) return prev;

    ListNode* tmp = cur->next;
    cur->next = prev;

    return reverse(tmp, cur);
  }
  ListNode* reverseList(ListNode* head) { return reverse(head, nullptr); }
};

}; // namespace recursion
