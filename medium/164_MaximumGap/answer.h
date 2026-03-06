/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-03-06
 * Problem : 164-medium-Maximum Gap
 * Link    : 
*/

#pragma once
#include "common.h"
#include <algorithm>
using namespace std;

class Solution
{
  void counting_sort(vector<int>& nums, int place_val)
  {
    vector<int> counting(10);
    for (int i : nums)
    {
      int n = (i / place_val) % 10;
      counting[n]++;
    }

    int start_index = 0;
    for (int i = 0; i < counting.size(); i++)
    {
      int count = counting[i];
      counting[i] = start_index;
      start_index += count;
    }

    // sort
    vector<int> result(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
      int n = (nums[i] / place_val) % 10;
      int index = counting[n];
      result[index] = nums[i];
      counting[n]++;
    }
    nums.swap(result);
  }

  // 0 <= nums[i] <= 109
  void radix_sort(vector<int>& nums)
  {
    int max_val = -1;
    for (int i : nums)
    {
      if (i > max_val)
        max_val = i;
    }
    int place_val = 1;
    while (place_val <= max_val)
    {
      counting_sort(nums, place_val);
      place_val *= 10;
    }
  }

public:
  // 要求 linear time 就别直接sort了 快排nlogn
  int maximumGap(vector<int>& nums)
  {
    if (nums.size() < 2)
      return 0;

    radix_sort(nums);

    int result = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
      int gap = nums[i + 1] - nums[i];
      if (gap > result)
        result = gap;
    }

    return result;
  }
};
