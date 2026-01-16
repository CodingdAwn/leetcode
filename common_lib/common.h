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
