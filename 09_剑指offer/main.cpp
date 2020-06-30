/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 30.06.2020
 * Purposes: 09_剑指offer
 *           一个stack用于push_back
 *           一个stack用于删除head
 *           https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/submissions/ 
 */
#include <iostream>
#include <stack>

using namespace std;
class CQueue {
  public:
  CQueue()
  {
  }

  void appendTail(int value)
  {
    s_for_in.push(value);
  }

  int deleteHead()
  {
    if (s_for_out.empty())
    {
      while(!s_for_in.empty())
      {
        s_for_out.push(s_for_in.top());
        s_for_in.pop();
      }
    }

    if (s_for_out.empty())
      return -1;

    auto ret = s_for_out.top();
    s_for_out.pop();
    return ret;
  }

  private:
  stack<int32_t> s_for_in;
  stack<int32_t> s_for_out;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
int main()
{
  return 0;
}
