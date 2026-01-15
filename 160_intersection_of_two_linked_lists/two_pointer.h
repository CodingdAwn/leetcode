/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.14
 * Purposes: 160-intersection of two linked lists
 * https://leetcode.com/problems/intersection-of-two-linked-lists/description/
 */

#pragma once
#include "common.h"

namespace two_pointer
{

// 要求Time: O(m+n) Space: O(1)
class Solution
{
public:
  // two pointer
  // 关键在于两个链表走两遍，两遍最终同时到达终点，且第二遍时会从小数组起点就开始同时移动
  ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
  {
    ListNode* itA = headA;
    ListNode* itB = headB;
    while (itA != itB)
    {
      if (itA == nullptr)
        itA = headB;
      else
        itA = itA->next;

      if (itB == nullptr)
        itB = headA;
      else
        itB = itB->next;
    }

    return itA;
  }
};

}; // namespace two_pointer
