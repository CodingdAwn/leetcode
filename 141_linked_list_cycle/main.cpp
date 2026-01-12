/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 2026.01.10
 * Purposes: 141-Linked List Cycle
 * https://leetcode.com/problems/linked-list-cycle/description/
 * 这个讲解的挺好的。
 * https://www.bilibili.com/video/BV1if4y1d7ob/?spm_id_from=333.337.search-card.all.click&vd_source=24d80f58d42c43bd27b0c05cc25221ef
 */

#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
  // 关键在于双指针(快慢指针)并理解怎么才能算是有环
  // 如果是一条直接，那么快指针永远都不会追上慢指针
  bool hasCycle(ListNode* head)
  {
    if (head == nullptr) return false;

    ListNode* slow = head;
    ListNode* fast = head;

    // 因为fast更快，所以肯定是fast先到终点
    while (fast && fast->next)
    {
      if (fast->next == slow)
      {
        return true;
      }
      slow = slow->next;
      fast = fast->next->next;
    }
    return false;
  }
};

int main(int argc, char* argv[])
{
  Solution s;
  // TODO make function to init ListNode
  ListNode* head;
  return s.hasCycle(head);
}
