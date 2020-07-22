/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 24.06.2020
 * Purposes: 16-最接近的三数之和
 *           https://leetcode-cn.com/problems/3sum-closest/
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      if (nums.size() < 3)
        return 0;

      sort(nums.begin(), nums.end());
      int32_t near = nums[0] + nums[1] + nums[2];

      int32_t sum = 0;
      int32_t start = 0;
      int32_t end = 0;
      for (int32_t i = 0; i <= nums.size() - 2; ++i)
      {
        start = i + 1;
        end = nums.size() - 1;
        while (start < end)
        {
          sum = nums[i] + nums[start] + nums[end];
          if (abs(sum - target) < (abs(near - target)))
              near = sum;

          if (sum < target)
            start++;
          else if (sum > target)
            end--;
          else
            return near;
        }
      }
      return near;
    }
};

int main()
{
  Solution s;
  vector<int32_t> src_vec = {-1, 2, 1, -4};
  auto ret = s.threeSumClosest(src_vec, 1);
  cout << "result is " << ret << endl;
  cout << "expected result is 2" << endl;
  return 0;
}
