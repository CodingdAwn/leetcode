#include "answer.h"
#include "common.h"
#include <gtest/gtest.h>

using namespace std;

TEST(Solution, flatten)
{
  Solution s;
  // 创建第一层: 1-2-3-4-5-6
  Node* head = new Node(1);
  Node* node2 = new Node(2);
  Node* node3 = new Node(3);
  Node* node4 = new Node(4);
  Node* node5 = new Node(5);
  Node* node6 = new Node(6);

  head->next = node2;
  node2->prev = head;
  node2->next = node3;
  node3->prev = node2;
  node3->next = node4;
  node4->prev = node3;
  node4->next = node5;
  node5->prev = node4;
  node5->next = node6;
  node6->prev = node5;

  // 创建第二层: 7-8-9-10 (挂在节点3下面)
  Node* node7 = new Node(7);
  Node* node8 = new Node(8);
  Node* node9 = new Node(9);
  Node* node10 = new Node(10);

  node7->next = node8;
  node8->prev = node7;
  node8->next = node9;
  node9->prev = node8;
  node9->next = node10;
  node10->prev = node9;

  node3->child = node7;

  // 创建第三层: 11-12 (挂在节点8下面)
  Node* node11 = new Node(11);
  Node* node12 = new Node(12);

  node11->next = node12;
  node12->prev = node11;
  node8->child = node11;

  Node* res = s.flatten(head);
  EXPECT_EQ(to_string(res), "[1,2,3,7,8,11,12,9,10,4,5,6]");
}

TEST(Solution, flatten2)
{
  Solution s;
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    
    head->next = node2; node2->prev = head;
    head->child = node3;

  Node* res = s.flatten(head);
  EXPECT_EQ(to_string(res), "[1,3,2]");
}    
