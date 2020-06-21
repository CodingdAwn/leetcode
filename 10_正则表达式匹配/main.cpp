/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 21.06.2020
 * Purposes: 10正则表达式匹配
 *           1.递归法
 *           2.动态规划
 *           https://leetcode-cn.com/problems/regular-expression-matching/
 */
#include <iostream>
#include <string>

using namespace std;

// 递归穷举法
class Solution {
public:
    bool isMatch(string s, string p) {
      if (p.empty())
        return s.empty();

      if (p[1] == '*')
        return isMatch(s, p.substr(2)) || (!s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p));
      else
        return !s.empty() && (s[0] == p[0] || p[0] == '.') && isMatch(s.substr(1), p.substr(1));
    }
};

int main()
{
  Solution s;
  if (!s.isMatch("aa", "a"))
    cout << "s is \"aa\" p is \"a\", and result is false" << endl;
  else
    cout << "error" << endl;

  if (s.isMatch("aa", "a*"))
    cout << "s is \"aa\" p is \"a*\", and result is true" << endl;
  else
    cout << "error" << endl;

  if (s.isMatch("ab", ".*"))
    cout << "s is \"ab\" p is \".*\", and result is true" << endl;
  else
    cout << "error" << endl;

  if (s.isMatch("aab", "c*a*b"))
    cout << "s is \"aab\" p is \"c*a*b\", and result is true" << endl;
  else
    cout << "error" << endl;

  if (!s.isMatch("mississippi", "mis*is*p*."))
    cout << "s is \"mississippi\" p is \"mis*is*p*.\", and result is false" << endl;
  else
    cout << "error" << endl;

  if (!s.isMatch("ab", ".*c"))
    cout << "s is \"ab\" p is \".*c\", and result is false" << endl;
  else
    cout << "error" << endl;

  return 0;
}
