/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.16
 * Purposes: 19-remove nth from end of list
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  // 使用双指针即可
  ListNode* removeNthFromEnd(ListNode* head, int n)
  {
    ListNode* left = head;
    ListNode* right = head;
    ListNode* last = left;

    while (right)
    {
      if (n > 0)
        n--;
      else
      {
        last = left;
        left = left->next;
      }
      right = right->next;
    }
    // 如果时移除的head
    if (head == left)
      return head->next;

    // 移除Nth
    last->next = left->next;
    return head;
  }
};
