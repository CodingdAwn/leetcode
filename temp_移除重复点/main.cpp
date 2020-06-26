/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 26.06.2020
 * Purposes: leetcode 面试题 移除重复点
 *           https://leetcode-cn.com/problems/remove-duplicate-node-lcci/
 */
#include <iostream>
#include <set>

using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x)
      : val(x)
      , next(NULL)
  {
  }
};

class Solution {
  public:
  ListNode* removeDuplicateNodes(ListNode* head)
  {
    if (head == nullptr)
      return nullptr;
    ListNode* pos = head;
    set<int32_t> node_list;
    node_list.insert(pos->val);
    while(pos->next)
    {
      auto val = pos->next->val;
      if (node_list.count(val))
      {
        pos->next = pos->next->next;
      }
      else
      {
        node_list.insert(val);
        pos = pos->next;
      }
    }

    return head;
  }
};

void PrintNodeList(ListNode* head, string comment)
{
  while(head)
  {
    cout << "print " << comment << head->val << endl;
    head = head->next;
  }
}

int main()
{
  // example 1
  auto node1 = new ListNode(1);
  node1->next = new ListNode(2);
  node1->next->next = new ListNode(3);
  node1->next->next->next = new ListNode(3);
  node1->next->next->next->next = new ListNode(2);
  node1->next->next->next->next->next = new ListNode(1);
  Solution s;
  auto ret = s.removeDuplicateNodes(node1);
  PrintNodeList(ret, "node1 ");

  // example 2
  auto node2 = new ListNode(1);
  node2->next = new ListNode(1);
  node2->next->next = new ListNode(1);
  node2->next->next->next = new ListNode(1);
  node2->next->next->next->next = new ListNode(2);

  ret = s.removeDuplicateNodes(node2);
  PrintNodeList(ret, "node2 ");
  return 0;
}
