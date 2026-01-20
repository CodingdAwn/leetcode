/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-01-19
 * Problem : 21-easy-Merge Two Sorted Lists
 * Link    : https://leetcode.com/problems/merge-two-sorted-lists/description/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
  {
    if (list1 == nullptr && list2 == nullptr) return nullptr;

    ListNode* head = new ListNode(0);
    ListNode* res = head;
    ListNode* tmp1 = nullptr;
    ListNode* tmp2 = nullptr;
    while (list1 && list2)
    {
      // 这样其实可以少遍历一次，但是逻辑复杂，没有这个if也可以
      if (list1->val == list2->val)
      {
        tmp1 = list1->next;
        head->next = list1;
        head->next->next = list2;
        list1 = tmp1;
        list2 = list2->next;
        head = head->next;
      }
      else if (list1->val < list2->val)
      {
        head->next = list1;
        list1 = list1->next;
      }
      else
      {
        head->next = list2;
        list2 = list2->next;
      }
      head = head->next;
    }
    // 检查剩余的
    if (list1 != nullptr) head->next = list1;
    if (list2 != nullptr) head->next = list2;
    head = res->next;
    delete res;
    return head;
  }
};
