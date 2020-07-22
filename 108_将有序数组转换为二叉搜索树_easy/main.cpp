/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 04.07.2020
 * Purposes: 108_将有序数组转换为二叉搜索树
 *           https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/
 */
#include <iostream>
#include <vector>

using namespace std;
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x)
      : val(x)
      , left(NULL)
      , right(NULL)
  {
  }
};

class Solution {
  public:
  TreeNode* bfs(vector<int>& nums, int low, int high)
  {
    if (low > high)
      return nullptr;

    int middle = (low + high) / 2;
    TreeNode* root = new TreeNode(nums[middle]);
    root->left = bfs(nums, 0, middle - 1);
    root->right= bfs(nums, middle + 1, high);

    return root;
  }

  TreeNode* sortedArrayToBST(vector<int>& nums)
  {
    if (nums.empty())
      return nullptr;
    return bfs(nums, 0, nums.size() - 1);
  }
};

int main()
{
  Solution s;
  vector<int> input_list = {-10,-3,0,5,9};
  auto ret = s.sortedArrayToBST(input_list);
  cout << "input list is -10,-3,0,5,9" << endl;
  return 0;
}
