/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 15.07.2020
 * Purposes: https://leetcode-cn.com/problems/triangle/
 *           经典动态规划题
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  int minimumTotal(vector<vector<int>>& triangle)
  {
    int n = triangle.size();
    // 只记录下一层的值即可 使空间复杂度降低为O(n)
    vector<int> dp(n + 1);
    // 从下往上遍历 代码更加简洁
    for (int i = n - 1; i >= 0; i--)
      for (int j = 0; j <= i; j++)
      {
        // 本层的triangle + 下一层的和
        dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
      }

    return dp[0];
  }
};

void outputList(vector<vector<int>>& input_list)
{
  for (auto& list : input_list)
  {
    for (auto& l : list)
      cout << l << ',';
    cout << endl;
  }
}

int main()
{
  Solution s;
  vector<vector<int>> input_list = { {2}, {3,4}, {6,5,7}, {4,1,8,3} };
  auto ret = s.minimumTotal(input_list);
  outputList(input_list);
  cout << "result is " << ret << endl;
  cout << "expect result is 11" << endl;
  return 0;
}
