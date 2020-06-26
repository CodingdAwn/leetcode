/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 26.06.2020
 * Purposes: 1-两数之和
 *           https://leetcode-cn.com/problems/two-sum/
 *             1.暴力法 O(n^2)
 *             2.map查找 O(n) 其实这里没有考虑map的效率
 */
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret_list;
        map<int32_t, int32_t> value_index;
        for (int32_t i = 0; i < nums.size(); ++i)
        {
          value_index[nums[i]] = i;
        }

        for (int32_t i = 0; i < nums.size(); ++i)
        {
          int32_t need_value = target - nums[i];
          auto iter = value_index.find(need_value);
          if (iter != value_index.end() && iter->second != i)
          {
            return {i, iter->second};
          }
        }

        return ret_list;
    }
};

int main()
{
  vector<int> input_list({2,7,11,15});
  Solution s;
  auto ret = s.twoSum(input_list, 9);
  cout << "input is 2,7,11,15 and target is 9" << endl;
  for (auto r : ret)
  {
    cout << "the result is " << r << endl;
  }
  cout << "expect result is [0,1]" << endl;
  return 0;
}
