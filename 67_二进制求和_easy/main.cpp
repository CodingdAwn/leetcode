/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 23.06.2020
 * Purposes: 67-二进制求和
 *           https://leetcode-cn.com/problems/add-binary/
 */
#include <iostream>

using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
      string ret_string;
      int32_t up = 0;

      int32_t i = a.length() - 1;
      int32_t j = b.length() - 1;
      for (; i >= 0 || j >= 0; --i, --j)
      {
        int32_t x = i < 0 ? 0 : a[i] - '0';
        int32_t y = j < 0 ? 0 : b[j] - '0';
        int32_t sum = ( x + y + up ) % 2;
        up = ( x + y + up ) / 2;
        char c_up = sum + '0';
        ret_string.insert(0, 1, c_up);
      }

      if (up > 0)
      {
        ret_string.insert(0, 1, '1');
      }
      return ret_string;
    }
};

int main()
{
  Solution s;
  auto ret = s.addBinary("11", "1");
  cout << "a is 11 b is 1, return is " << ret << endl;
  cout << "correct result is 100" << endl;

  ret = s.addBinary("1010", "1011");
  cout << "a is 1010 b is 1011, return is " << ret << endl;
  cout << "correct result is 10101" << endl;

  return 0;
}
