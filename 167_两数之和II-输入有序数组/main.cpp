/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 22.07.2020
 * Purposes: 167_两数之和II
 *           https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  vector<int> twoSum(vector<int>& numbers, int target)
  {
    int left = 0, right = numbers.size() - 1;
    while (left < right)
    {
      int sum = numbers[left] + numbers[right];
      if (sum == target)
        return {left + 1, right + 1};
      if (sum > target)
        right--;
      else 
        left++;
    }
    return {-1, -1};
  }
};

int main()
{
  Solution s;
  vector<int> input_list = {2, 7, 11, 15};
  auto ret = s.twoSum(input_list, 9);
  cout << "input is 2,7,11,15, target is 9, result is " << "[ " << ret[0] << "," << ret[1] << " ]" << endl;
  cout << "expect result is [1,2]" << endl;
  return 0;
}
