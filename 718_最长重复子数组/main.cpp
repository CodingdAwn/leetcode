/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 01.07.2020
 * Purposes: 718_最长重复子数组
 *           https://leetcode-cn.com/problems/maximum-length-of-repeated-subarray/
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  int findLength(vector<int>& A, vector<int>& B)
  {
    int32_t size_a = A.size();
    int32_t size_b = B.size();
    int32_t ret = 0;
    vector<vector<int32_t>> dp(size_a + 1, vector<int32_t>(size_b + 1, 0));
    for (int32_t i = size_a - 1; i >= 0; --i)
    {
      for (int32_t j = size_b - 1; j >= 0; --j)
      {
        dp[i][j] = A[i] == B[j] ? dp[i + 1][j + 1] + 1 : 0;
        ret = max(ret, dp[i][j]);
      }
    }
    return ret;
  }
};

int main()
{
  Solution s;
  vector<int32_t> input_list_a = {1,2,3,2,1};
  vector<int32_t> input_list_b = {3,2,1,4,7};
  auto ret = s.findLength(input_list_a, input_list_b);
  cout << "input list A is 1,2,3,2,1, B is 3,2,1,4,7, result is " << ret << endl;
  cout << "expect result is 3" << endl;
  return 0;
}
