/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 17.07.2020
 * Purposes: https://leetcode-cn.com/problems/search-insert-position/
 *           就是二分
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  int searchInsert(vector<int>& nums, int target)
  {
    int left = 0, right = nums.size() - 1;
    int mid = (left + right) / 2;
    while(left <= right)
    {
      if (nums[mid] == target)
        return mid;
      if (nums[mid] < target)
        left = mid + 1;
      if (nums[mid] > target)
        right = mid - 1;

      mid = (left + right) / 2;
    }
    return left;
  }
};

int main()
{
  Solution s;
  vector<int> input_list = {1,3,5,6};
  auto ret = s.searchInsert(input_list, 5);
  cout << "input is 1,3,5,6  result is " << ret << endl;
  cout << "expect result is 2" << endl;

  ret = s.searchInsert(input_list, 2);
  cout << "input is 1,3,5,6  result is " << ret << endl;
  cout << "expect result is 1" << endl;
  
  ret = s.searchInsert(input_list, 7);
  cout << "input is 1,3,5,6  result is " << ret << endl;
  cout << "expect result is 4" << endl;

  ret = s.searchInsert(input_list, 0);
  cout << "input is 1,3,5,6  result is " << ret << endl;
  cout << "expect result is 0" << endl;

  return 0;
}
