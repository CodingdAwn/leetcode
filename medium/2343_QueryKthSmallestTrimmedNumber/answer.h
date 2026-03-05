/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-03-05
 * Problem : 2343-medium-Query Kth Smallest Trimmed Number
 * Link    :
 */

#pragma once
#include "common.h"
#include <numeric>
using namespace std;

class Solution
{
public:
  // 测试案例中数据已经超过int范围了，所以应该使用字符串操作
  vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries)
  {
    int m = nums.size(), n = nums[0].size();
    vector<int> result;
    vector<vector<int>> radix_map_index(n+1, vector<int>(m , 0));
    iota(radix_map_index[0].begin(), radix_map_index[0].end(), 0);

    // 先求出所有radix的排序，再根据queries求值
    for (int radix = 1; radix <= n; radix++)
    {
      vector<int> counting(10);
      for (string s : nums)
      {
        int num = s[n - radix] - '0';
        counting[num]++;
      }

      int start_index = 0;
      for (int i = 0; i < counting.size(); i++)
      {
        int count = counting[i];
        counting[i] = start_index;
        start_index += count;
      }

      for (int i = 0; i < m; i++)
      {
        int pre_index = radix_map_index[radix-1][i];
        int num = nums[pre_index][n - radix] - '0';
        int index = counting[num];
        radix_map_index[radix][index] = pre_index;
        counting[num]++;
      }
    }

    for (auto& v : queries)
    {
      int k = radix_map_index[v[1]][v[0] -1];
      result.push_back(k);
    }

    return result;
  }
};
