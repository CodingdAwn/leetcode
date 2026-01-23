/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-01-23
 * Problem : 61-medium-Rotate List
 * Link    : https://leetcode.com/problems/rotate-list/description/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  ListNode* rotateRight(ListNode* head, int k)
  {
    if (head == nullptr) return nullptr;
    if (k == 0) return head;

    ListNode* tail = head;
    int count = 1;
    while (tail->next)
    {
      tail = tail->next;
      count++;
    }
    int r = k % count;
    if (r == 0) return head;

    int target = count - r - 1;
    ListNode* it = head;
    for (int i = 0; i < target; i++)
      it = it->next;

    ListNode* new_head = it->next;
    it->next = nullptr;
    tail->next = head;
    return new_head;
  }
};
