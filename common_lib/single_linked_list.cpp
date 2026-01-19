#include <iostream>

using namespace std;
struct LinkedNode {
  int val;
  LinkedNode *next;
  LinkedNode(int v) : val(v), next(nullptr) {}
};

class SLinkedList {
  LinkedNode *head;
  int size;

public:
  SLinkedList() {
    head = nullptr;
    size = 0;
  }

  void print(string prefix) {
    cout << "[" << prefix << "] ";
    cout << "[ ";
    LinkedNode* node = head;
    while (node) {
      cout << node->val << " ";
      node = node->next;
    }
    cout << "]" << endl;
  }

  int get(int index) {
    if (index < 0)
      return -1;
    if (index >= size)
      return -1;

    print("get");
    LinkedNode *it = head;
    for (int i = 0; i < index; i++)
      it = it->next;
    return it->val;
  }

  void addAtHead(int val) {
    LinkedNode *node = new LinkedNode(val);
    node->next = head;
    head = node;
    size++;

    print("addAtHead");
  }

  void addAtTail(int val) {
    LinkedNode *node = new LinkedNode(val);
    if (head == nullptr) {
      head = node;
    } else {
      LinkedNode *it = head;
      while (it->next) {
        it = it->next;
      }
      it->next = node;
    }
    size++;
    print("addAtTail");
  }

  void addAtIndex(int index, int val) {
    if (index == 0) {
      addAtHead(val);
      return;
    }
    if (index == size) {
      addAtTail(val);
      return;
    }

    if (index < 0)
      return;
    if (index > size)
      return;

    LinkedNode *node = new LinkedNode(val);
    LinkedNode *it = head;
    for (int i = 0; i < index; i++) {
      it = it->next; 
    }
    node->next = it->next;
    it->next = node;
      
    size++;
    print("addAtIndex");
  }

  void deleteAtIndex(int index) {
    if (index < 0)
      return;
    if (head == nullptr)
      return;

    if (index == 0) {
      head = head->next;
    } else {
      LinkedNode *it = head;
      for (int i = 0; i < index - 1; i++) {
        it = it->next;
      }

      it->next = it->next->next;
    }
    size--;
    print("deleteAtIndex");
  }
};
