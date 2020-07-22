/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 29.06.2020
 * Purposes: 215_数组中的第K个最大元素
 *           1.暴力法 排序 然后取对应索引值
 *           2.小顶堆
 *           3.partion 减治
 *           https://leetcode-cn.com/problems/kth-largest-element-in-an-array/
 */
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
  public:
  int findKthLargest(vector<int>& nums, int k)
  {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
  }

  int findKthLargest2(vector<int>& nums, int k)
  {
    priority_queue<int, vector<int>, greater<int>> store;
    for (int32_t i = 0; i < nums.size(); ++i)
    {
      store.push(nums[i]);
      if (store.size() > k)
      {
        store.pop();
      }
    }

    return store.top();
  }
};

int main()
{
  Solution s;
  vector<int> input_list = {3,2,1,5,6,4};
  auto ret = s.findKthLargest2(input_list, 2);
  cout << "input is 3,2,1,5,6,4, result is " << ret << endl;
  cout << "expect result is 5" << endl;

  input_list = {3,2,3,1,2,4,5,5,6};
  ret = s.findKthLargest2(input_list, 4);
  cout << "input is 3,2,3,1,2,4,5,5,6 result is " << ret << endl;
  cout << "expect result is 4" << endl;


  return 0;
}
