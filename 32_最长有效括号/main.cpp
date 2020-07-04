/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 04.07.2020
 * Purposes: 32_最长有效括号
 *           https://leetcode-cn.com/problems/longest-valid-parentheses/
 */
#include <iostream>
#include <stack>

using namespace std;
class Solution {
  public:
  int longestValidParentheses(string s)
  {
    stack<int> match_stack;
    // 需要一个-1 参照物
    match_stack.push(-1);
    int ret = 0;
    for (int i = 0; i < s.size(); ++i)
    {
      char c = s[i];
      // 如果是（push
      if (c == '(')
      {
        match_stack.push(i);
      }
      else
      {
        // 如果是)如果栈没有空 则计算长度
        // 如果空了 说明没有匹配到（ 把当前的索引压栈 当作参照物
        match_stack.pop();
        if (match_stack.empty())
          match_stack.push(i);
        else
          ret = max(ret, i - match_stack.top());
      }
    }
    return ret;
  }
};

int main()
{
  Solution s;
  auto ret = s.longestValidParentheses("(()");
  cout << "input is ((), result is " << ret << endl;
  cout << "expect result is 2" << endl;
  return 0;
}
