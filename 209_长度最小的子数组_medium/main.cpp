/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 28.06.2020
 * Purposes: 209_长度最小的子数组
 *           时间复杂度为O(n)
 *           start和end都最多移动n
 *           https://leetcode-cn.com/problems/minimum-size-subarray-sum/ 
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
  int minSubArrayLen(int s, vector<int>& nums)
  {
    if (nums.empty() || s <= 0)
      return 0;

    int32_t min_ret = INT32_MAX;
    int32_t start = 0, end = 0;
    int32_t len = nums.size();
    int32_t sum = 0;
    while (end < len)
    {
      sum += nums[end];
      while (sum >= s)
      {
        min_ret = min(min_ret, end - start + 1);
        sum -= nums[start];
        start++;
      }
      end++;
    }
    return min_ret == INT32_MAX ? 0 : min_ret;
  }
};

int main()
{
  Solution s;
  vector<int> input_list = {2,3,1,2,3,4};
  auto ret = s.minSubArrayLen(7, input_list);
  cout << "input is 2,3,1,2,3,4 result is " << ret << endl;
  cout << "expect result is 2" << endl;
  return 0;
}
