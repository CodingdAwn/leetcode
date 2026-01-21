#pragma once

#include <functional>
#include <string>
#include <vector>

// Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Definition for a Node.
// 430 used it
class Node
{
public:
  int val;
  Node* prev;
  Node* next;
  Node* child;
  Node* random;
  Node() : val(0), prev(nullptr), next(nullptr), child(nullptr), random(nullptr) {}
  Node(int v) : val(v), prev(nullptr), next(nullptr), child(nullptr), random(nullptr) {}
};

// recieve a Integer number
int GiveMeAnInteger();

// recieve an Array Integer numbers
void LoopInputNumberToCall(std::function<void(char* input)> func);

// recieve two Array Integer numbers
void LoopInputNumberToCall2(std::function<void(char* input1, char* input2)> func);

// maybe make template function, but now it totally work fine.
ListNode* ConvertListNode(std::vector<int>& input);

// listnode to string
std::string to_string(ListNode* head);

// node to string
std::string to_string(Node* head);
