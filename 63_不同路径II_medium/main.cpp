/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 06.07.2020
 * Purposes: 63_不同路径II
 *           https://leetcode-cn.com/problems/unique-paths-ii/
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
  {
    if (obstacleGrid.empty())
      return 0;

    int row = obstacleGrid.size();
    int col = obstacleGrid[0].size();
    vector<vector<int>> dp(row, vector<int>(col));
    
    for (int i = 0; i < row && obstacleGrid[i][0] == 0; ++i)
    {
      dp[i][0] = 1;
    }
    for (int j = 0; j < col && obstacleGrid[0][j] == 0; ++j)
    {
        dp[0][j] = 1;
    }

    for (int i = 1; i < row; ++i)
    {
      for (int j = 1; j < col; ++j)
      {
        if (obstacleGrid[i][j] == 0)
        {
          dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
      }
    }

    return dp[row - 1][col - 1];
  }
};

int main()
{
  Solution s;
  vector<vector<int>> input_list = { {0,0,0}, {0,1,0}, {0,0,0} };
  auto ret = s.uniquePathsWithObstacles(input_list);
  cout << "input list is { {0,0,0}, {0,1,0}, {0,0,0} }, result is " <<
    ret << endl;

  cout << "expext result is 2" << endl;
  return 0;
}
