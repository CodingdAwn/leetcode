/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 13.07.2020
 * Purposes: 350_两个数组的交集II
 *           https://leetcode-cn.com/problems/intersection-of-two-arrays-ii/
 *           1.哈希
 *           2.双指针
 */
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
  public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
  {
    if (nums2.size() < nums1.size())
      return intersect(nums2, nums1);

    unordered_map<int, int> small_map;
    for (auto num : nums1)
    {
      small_map[num]++;
    }

    vector<int> intersect;
    for (auto num : nums2)
    {
      if (small_map[num] != 0)
      {
        intersect.push_back(num);
        small_map[num]--;
      }
      else
        small_map.erase(num);
    }

    return intersect;
  }
};

int main()
{
  Solution s;
  vector<int> input_list1 = {1,2,2,1};
  vector<int> input_list2 = {2,2};
  auto ret = s.intersect(input_list1, input_list2);
  cout << "input_list1 is 1,2,2,1 input_list2 is 2,2" << endl;
  for (auto r : ret)
  {
    cout << "result is " << r << endl;
  }

  input_list1 = {4,9,5};
  input_list2 = {9,4,9,8,4};
  ret = s.intersect(input_list1, input_list2);
  cout << "input_list1 is 4,9,5 input_list2 is 9,4,9,8,4" << endl;
  for (auto r : ret)
  {
    cout << "result is " << r << endl;
  }
  return 0;
}
