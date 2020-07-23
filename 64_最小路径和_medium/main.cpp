/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 23.07.2020
 * Purposes: 64_最小路径和
 *           https://leetcode-cn.com/problems/minimum-path-sum/
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  int minPathSum(vector<vector<int>>& grid)
  {
    int row = grid.size();
    int col = grid[0].size();

    int i = 0, j = 0;
    for (i = 0; i < row; ++i)
    {
      for (j = 0; j < col; ++j)
        if (i == 0 && j == 0)
          continue;
        else if (i == 0)
          grid[i][j] = grid[i][j - 1] + grid[i][j];
        else if (j == 0)
          grid[i][j] = grid[i - 1][j] + grid[i][j];
        else
          grid[i][j] = grid[i][j] + min(grid[i - 1][j], grid[i][j - 1]);
    }
    return grid[i - 1][j - 1];
  }
};

int main()
{
  Solution s;
  vector<vector<int>> input_list = { {1,3,1}, {1,5,1}, {4,2,1} };
  auto ret = s.minPathSum(input_list);
  cout << "input is " << endl;
  cout << "1 3 1" << endl;
  cout << "1 5 1" << endl;
  cout << "4 2 1" << endl;
  cout << "result is " << ret << endl;
  cout << "expect result is 7" << endl;
  return 0;
}
