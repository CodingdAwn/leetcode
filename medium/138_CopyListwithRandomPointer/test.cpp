#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>

using namespace std;

Node* createTestCase1()
{
  // 创建节点
  Node* node7 = new Node(7);
  Node* node13 = new Node(13);
  Node* node11 = new Node(11);
  Node* node10 = new Node(10);
  Node* node1 = new Node(1);

  // 设置 next 指针
  node7->next = node13;
  node13->next = node11;
  node11->next = node10;
  node10->next = node1;

  // 设置 random 指针
  node7->random = nullptr;
  node13->random = node7;
  node11->random = node1;
  node10->random = node11;
  node1->random = node7;

  return node7;
}

TEST(Solution, somefunction)
{
  Solution s;
  Node* head = createTestCase1();
  Node* res = s.copyRandomList(head);
}
