/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.17
 * Purposes: 203-easy-remove linked list elements
 * https://leetcode.com/problems/remove-linked-list-elements/description/
 */

#pragma once
#include "common.h"

namespace dummy_node
{

class Solution
{
public:
  ListNode* removeElements(ListNode* head, int val)
  {
    if (head == nullptr) return nullptr;

    // 使用一个dummy node放在头部
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* res = dummy;
    while (dummy->next)
    {
      if (dummy->next->val == val)
      {
        dummy->next = dummy->next->next;
      }
      else
      {
        dummy = dummy->next;
      }
    }
    return res->next;
  }
};

}; // namespace dummy_node
