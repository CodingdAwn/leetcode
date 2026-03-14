/**
 * File    : answer.h
 * Author  : dAwn_
 * Date    : 2026-03-14
 * Problem : 77-medium-Combinations
 * Link    : 
*/

#pragma once
#include "common.h"
using namespace std;

class Solution
{
  vector<vector<int>> result;
  vector<int> one;
  int m = 0;

public:
  void dfs(int n, int k)
  {
    if (one.size() == k)
    {
      result.push_back(one);
      return;
    }

    for (int i = n; i <= m; i++)
    {
      one.push_back(i);
      dfs(i + 1, k);
      one.pop_back();
    }
  }

  vector<vector<int>> combine(int n, int k)
  {
    m = n;
    dfs(1, k);
    return result;
  };
};
