// https://leetcode.com/explore/learn/card/linked-list/210/doubly-linked-list/1294/
// leet code design linked list
struct LinkedNode
{
  int val;
  LinkedNode *next, *prev;
  LinkedNode(int v) : val(v), next(nullptr), prev(nullptr) {}
};

class MyLinkedList
{
  LinkedNode* head_;
  int size_;

public:
  MyLinkedList()
  {
    head_ = nullptr;
    size_ = 0;
  }

  int get(int index)
  {
    if (head_ == nullptr) return -1;
    if (index >= size_ || index < 0) return -1;

    LinkedNode* it = head_;
    for (int i = 0; i < index; i++)
    {
      it = it->next;
    }
    return it->val;
  }

  void addAtHead(int val)
  {
    LinkedNode* node = new LinkedNode(val);
    if (head_ == nullptr)
    {
      head_ = node;
      size_++;
      return;
    }

    node->next = head_;
    head_->prev = node;
    head_ = node;
    size_++;
  }

  void addAtTail(int val)
  {
    LinkedNode* node = new LinkedNode(val);
    if (head_ == nullptr)
    {
      head_ = node;
      size_++;
      return;
    }

    LinkedNode* it = head_;
    while (it->next)
    {
      it = it->next;
    }
    it->next = node;
    node->prev = it;
    size_++;
  }

  void addAtIndex(int index, int val)
  {
    if (index == 0)
    {
      addAtHead(val);
      return;
    }
    if (index == size_)
    {
      addAtTail(val);
      return;
    }
    if (index > size_ || index < 0) return;

    LinkedNode* node = new LinkedNode(val);
    LinkedNode* it = head_;
    for (int i = 0; i < index; i++)
    {
      it = it->next;
    }
    node->prev = it->prev;
    node->next = it;
    it->prev->next = node;
    it->prev = node;
    size_++;
  }

  void deleteAtIndex(int index)
  {
    if (head_ == nullptr) return;
    if (index < 0 || index >= size_) return;
    if (index == 0)
    {
      LinkedNode* tmp = head_;
      head_ = tmp->next;
      delete tmp;
      size_--;
      return;
    }

    LinkedNode* it = head_;
    for (int i = 0; i < index; i++)
    {
      it = it->next;
    }
    it->prev->next = it->next;
    if (it->next) it->next->prev = it->prev;
    delete it;
    size_--;
  }
};
