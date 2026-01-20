/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026.01.17
 * Purposes: 203-easy-remove linked list elements
 * https://leetcode.com/problems/remove-linked-list-elements/description/
 */

#pragma once
#include "common.h"

namespace first_blood
{

class Solution
{
public:
  ListNode* removeElements(ListNode* head, int val)
  {
    if (head == nullptr) return nullptr;

    // 先移除头是val的节点
    // TIPS:这里为了去头显得很麻烦，实际上使用一个dummy node做头就好了
    while (head && head->val == val)
    {
      head = head->next;
    }

    if (head == nullptr || head->next == nullptr) return head;

    ListNode* it = head;
    while (it && it->next)
    {
      if (it->next->val == val)
      {
        it->next = it->next->next;
        continue;
      }
      it = it->next;
    }

    return head;
  }
};
}; // namespace first_blood
