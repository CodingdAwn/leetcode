/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 27.06.2020
 * Purposes: 41_缺失的第一个正数
 *           官方解题是使用map然后 从1++遍历 其实更好理解
 *           这里采用的是 先排序 然后循环一遍找到最小值
 *           https://leetcode-cn.com/problems/first-missing-positive/
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  int firstMissingPositive(vector<int>& nums)
  {
    if (nums.empty())
      return 1;

    sort(nums.begin(), nums.end());
    int32_t smallest_positive = 0;
    int32_t i = 0;
    for (; i < nums.size(); ++i)
    {
      if (nums[i] <= 0)
        continue;

      if (i > 0 && nums[i] == nums[i-1])
        continue;

      if (nums[i] != ++smallest_positive)
        break;
    }
    if (i == nums.size())
      smallest_positive++;
    return smallest_positive;
  }
};

int main()
{
  Solution s;
  vector<int> input_list = {1,2,0};
  auto ret = s.firstMissingPositive(input_list);
  cout << "input is 1,2,0, result is " << ret << endl;
  cout << "expect result is 3" << endl;

  input_list = {3,4,-1,1};
  ret = s.firstMissingPositive(input_list);
  cout << "input is 3,4,-1,1 result is " << ret << endl;
  cout << "expect result is 2" << endl;

  input_list = {7,8,9,11,12};
  ret = s.firstMissingPositive(input_list);
  cout << "input is 7,8,9,11,12 result is " << ret << endl;
  cout << "expect result is 1" << endl;
  return 0;
}
