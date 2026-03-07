/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-03-07
 * Problem : 24-medium-Swap Nodes in Pairs
 * Link    :
 */

#pragma once
#include "common.h"
using namespace std;

class Solution
{
public:
  ListNode* swapPairs(ListNode* head)
  {
    if (head == nullptr)
      return nullptr;

    if (head->next == nullptr)
      return head;

    ListNode* tmp = head;
    head = head->next;
    tmp->next = swapPairs(head->next);
    head->next = tmp;

    return head;
  }
};
