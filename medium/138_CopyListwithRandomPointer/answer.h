/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-01-22
 * Problem : 138-medium-Copy List with Random Pointer
 * Link    : https://leetcode.com/problems/copy-list-with-random-pointer/description/
 */

#pragma once
#include "common.h"
#include <unordered_map>

class Solution
{
public:
  Node* copyRandomList(Node* head)
  {
    if (head == nullptr) return nullptr;
    std::unordered_map<Node*, Node*> old_to_new;
    Node* it = head;
    while (it)
    {
      old_to_new[it] = new Node(it->val);
      it = it->next;
    }

    it = head;
    Node* tmp = nullptr;
    while (it)
    {
      tmp = old_to_new[it];
      tmp->next = old_to_new[it->next];
      tmp->random = old_to_new[it->random];

      it = it->next;
    }
    return old_to_new[head];
  }
};
