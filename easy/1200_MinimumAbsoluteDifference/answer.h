/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-02-28
 * Problem : 1200-easy-Minimum Absolute Difference
 * Link    : 
*/

#pragma once
#include "common.h"
using namespace std;

class Solution
{
public:
  vector<vector<int>> minimumAbsDifference(vector<int>& arr)
  {
    vector<vector<int>> res;
    sort(arr.begin(), arr.end());

    int min_diff = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
      int diff = arr[i + 1] - arr[i];
      if (diff < min_diff)
      {
        res = {{arr[i], arr[i + 1]}};
        min_diff = diff;
      }
      else if (diff == min_diff)
      {
        res.push_back({arr[i], arr[i + 1]});
      }
    }

    return res;
  }
};
