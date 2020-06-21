/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 20.06.2020
 * Purposes: 125 是否是回文字符串
 *           https://leetcode-cn.com/problems/valid-palindrome/
 *               1.使用双指针验证
 *               2.直接反序 看是否相同也可验证
 */
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
      if (s.empty())
        return true;
      string sgood;
      for (char c : s)
      {
        if (isalnum(c))
          sgood += tolower(c);
      }

      int32_t left = 0, right = sgood.length() - 1;
      while(left < right)
      {
        if (sgood[left] != sgood[right])
          return false;

        left++;
        right--;
      }
      return true;
    }
};

int main()
{
  Solution s;
  if (s.isPalindrome("aba"))
    cout << "OK!" << endl;

  if (s.isPalindrome("A man, a plan, a canal: Panama"))
    cout << "OK!" << endl;

  if (!s.isPalindrome("race a car"))
    cout << "not palindrome" << endl;

  return 0;
}
