#include <iostream>

using namespace std;
struct LinkedNode {
  int val;
  LinkedNode *next;
  LinkedNode(int v) : val(v), next(nullptr) {}
};

class MyLinkedList {
  LinkedNode *head;
  int size;

public:
  MyLinkedList() {
    head = nullptr;
    size = 0;
  }

  void print(string prefix) {
    cout << "[" << prefix << "] ";
    cout << "[ ";
    while (head) {
      cout << head->val << " ";
      head = head->next;
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
    while (it && index >= 0) {
      if (index == 0) {
        return it->val;
      }
      index--;
      it = it->next;
    }
    return -1;
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

    if (index < 0)
      return;
    if (index >= size)
      return;

    LinkedNode *node = new LinkedNode(val);
    LinkedNode *it = head;
    while (it && index >= 0) {
      if (index == 0) {
        node->next = it->next;
        it->next = node;
      }
      index--;
      it = it->next;
    }
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
      while (it->next && index >= 1) {
        if (index == 1) {
          it->next = it->next->next;
        }
        index--;
        it = it->next;
      }
    }
    size--;
    print("deleteAtIndex");
  }
};

int main() {
  cout << "Hello CMake!" << endl;
  MyLinkedList *ll = new MyLinkedList();
  ll->addAtHead(1);
  ll->addAtTail(3);
  ll->addAtIndex(1, 2); // linked list becomes 1->2->3
  int ret = ll->get(1);           // return 2
  cout << "get result : " << ret << endl;
  ll->deleteAtIndex(1); // now the linked list is 1->3
  ret = ll->get(1);           // return 3
  cout << "get result : " << ret << endl;
  return 0;
}
