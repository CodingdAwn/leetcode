/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 04.07.2020
 * Purposes: 378_有序矩阵中第K小的元素
 *           https://leetcode-cn.com/problems/kth-smallest-element-in-a-sorted-matrix/
 *           暴力法：就是把矩阵压平 然后sort取n - k即可
 *           二分法
 */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
  public:
  // 找出小于中间的值的所有数量
  int smallWithMiddle(vector<vector<int>>& matrix, int middle)
  {
    int count = 0;
    int row = 0;
    int col = matrix.size() - 1;
    while(col >= 0 && row < matrix.size())
    {
      if (matrix[row][col] <= middle)
      {
        count += col + 1;
        row++;
      }
      else
        col--;
    }
    return count;
  }

  int kthSmallest(vector<vector<int>>& matrix, int k)
  {
    int size = matrix.size() - 1;
    int low = matrix[0][0];
    int high= matrix[size][size];

    while(low < high)
    {
      int middle = low + ( (high - low) >> 1 );
      int count = smallWithMiddle(matrix, middle);
      // 如果小于中间值的数量 < k
      // 那么扩大范围
      if (count < k)
        low = middle + 1;
      // 否则 缩小范围 范围肯定在low---middle之间
      else
        high = middle;
    }
    return low;
  }
};

int main()
{
  Solution s;
  vector<vector<int>> input_matrix = {{1,  5,  9}, {10, 11, 13}, {12, 13, 15}};
  auto ret = s.kthSmallest(input_matrix, 8);
  cout << "input is " << endl;
  cout << "1   5   9" << endl;
  cout << "10  10  13" << endl;
  cout << "12  13  15" << endl;
  cout << "result is " << ret << endl;
  cout << "expect result is 13" << endl;
  return 0;
}
