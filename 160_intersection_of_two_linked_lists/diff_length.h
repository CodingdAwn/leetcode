/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.14
 * Purposes: 160-intersection of two linked lists
 * https://leetcode.com/problems/intersection-of-two-linked-lists/description/
 */

#pragma once
#include "common.h"

namespace diff_length
{

// 要求Time: O(m+n) Space: O(1)
class Solution
{
public:
  // length difference
  // 这个还算好理解，先确认每个链表的长度，然后先移动长的那个，保证长度一致后，再一起移动
  ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
  {
    // 计算两个链表的长度
    int m = 0, n = 0;
    ListNode* it = headA;
    while (it)
    {
      it = it->next;
      m++;
    }

    it = headB;
    while (it)
    {
      it = it->next;
      n++;
    }

    // 计算差值，将长度大的链表先移动
    int diff = abs(m - n);
    if (m > n)
    {
      while (diff)
      {
        headA = headA->next;
        diff--;
      }
    }
    else
    {
      while (diff)
      {
        headB = headB->next;
        diff--;
      }
    }

    // 一起移动，看是否有交叉
    while (headA && headB)
    {
      if (headA == headB)
      {
        return headA;
      }
      headA = headA->next;
      headB = headB->next;
    }

    return nullptr;
  }
};

}; // namespace diff_length
