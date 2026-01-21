/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-01-21
 * Problem : 430-medium-Flatten a Multilevel Doubly Linked List
 * Link    : https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/description/
 */

#pragma once
#include "common.h"

class Solution
{
public:
  // recursion
  Node* flatten(Node* head)
  {
    if (head == nullptr) return nullptr;
    Node* it = head;
    Node* tmp = nullptr;
    while (it)
    {
      if (it->child)
      {
        tmp = it->next;
        it->next = flatten(it->child);
        // 需要将链表保持为正常的double list否则通过不了
        it->next->prev = it;
        // 清空子节点，否则后续循环还会错误进入，这里相当于消费掉(解决掉)了子序列
        it->child = nullptr;

        // iterate到底，因为要把之前的tmp连接过来
        while (it->next)
        {
          it = it->next;
        }

        // reconnect
        if (tmp)
        {
          it->next = tmp;
          tmp->prev = it;
        }
      }
      it = it->next;
    }
    return head;
  }
};
