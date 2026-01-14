/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.13
 * Purposes: 142-环形链表2
 * https://leetcode.com/problems/linked-list-cycle-ii/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  /*           x   p(交点)
   *    ----------------
   *               \   |
   *               z\  |y
   *                 \ |
   *                   追上的点
   *
   *  x = z
   */
  ListNode* detectCycle(ListNode* head)
  {
    if (head == nullptr) return nullptr;
    ListNode* x = head;

    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next)
    {
      if (fast->next == slow)
      {
        // 是环形链表 判断x=z
        while (fast != x)
        {
          fast = fast->next;
          x = x->next;
        }
        return fast;
      }

      fast = fast->next->next;
      slow = slow->next;
    }

    return nullptr;
  }
};
