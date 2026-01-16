#include "common.h"
#include <algorithm>
#include <iostream>

using namespace std;

int GiveMeAnInteger()
{
  cout << "Please type a Integer!" << endl;
  char szBuffer[128] = {0};
  cin.get(szBuffer, sizeof(szBuffer));

  int input = atoi(szBuffer);

  // to get the \r\t
  cin.get();

  return input;
}

void LoopInputNumberToCall(function<void(char* input)> func)
{
  while (1)
  {
    cout << "Please type a Integer array!" << endl;
    char szBuffer[128] = {0};
    cin.get(szBuffer, sizeof(szBuffer));

    // to get the \r\t
    cin.get();
    string input = szBuffer;
    if (input.compare("exit") == 0) break;
    func(szBuffer);
  }
}

void LoopInputNumberToCall2(function<void(char* input1, char* input2)> func)
{
  while (1)
  {
    cout << "Please type Integer numbers1" << endl;
    char szBuffer1[128] = {0};
    cin.get(szBuffer1, sizeof(szBuffer1));

    // to get the \r\t
    cin.get();
    string input1 = szBuffer1;
    if (input1.compare("exit") == 0) break;

    cout << "Please type Integer numbers2" << endl;
    char szBuffer2[128] = {0};
    cin.get(szBuffer2, sizeof(szBuffer2));

    // to get the \r\t
    cin.get();
    string input2 = szBuffer2;
    if (input2.compare("exit") == 0) break;

    func(szBuffer1, szBuffer2);
  }
}

ListNode* ConvertListNode(std::vector<int>& input)
{
  if (input.empty()) return nullptr;

  ListNode* head = nullptr;
  ListNode* it = nullptr;

  for (auto i : input)
  {
    if (head == nullptr)
    {
      head = new ListNode(i);
      it = head;
    }
    else
    {
      it->next = new ListNode(i);
      it = it->next;
    }
  }
  return head;
}

string to_string(ListNode* head)
{
  if (head == nullptr) return "[]";

  std::string res = "[";
  while (head)
  {
    res += std::to_string(head->val);
  }

  res += "]";
  return res;
}
