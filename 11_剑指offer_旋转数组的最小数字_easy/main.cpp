/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 23.07.2020
 * Purposes: 11_剑指offer
 *           https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  int minArray(vector<int>& numbers)
  {
    int left = 0, right = numbers.size() - 1;
    while (left < right)
    {
      int mid = (left + right) / 2;
      if (numbers[mid] > numbers[right])
        left = mid + 1;
      else if (numbers[mid] < numbers[right])
        right = mid;
      else
        right -= 1;
    }
    return numbers[left];
  }
};

int main()
{
  Solution s;
  vector<int> input_list = {3,4,5,1,2};
  auto ret = s.minArray(input_list);
  cout << "input is 3,4,5,1,2 result is " << ret << endl; 
  cout << "expect result is 1" << endl;

  input_list = {2,2,2,0,1};
  ret = s.minArray(input_list);
  cout << "input is 2,2,2,0,1 result is " << ret << endl; 
  cout << "expect result is 0" << endl;

  return 0;
}
