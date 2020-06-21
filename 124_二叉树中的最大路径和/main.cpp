/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 21.06.2020
 * Purposes: 124 二叉树中的最大路径和
 *           https://leetcode-cn.com/problems/binary-tree-maximum-path-sum/
 */
#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x)
      : val(x)
      , left(nullptr)
      , right(nullptr)
  {
  }
};

class Solution {
  private: 
    int32_t sum_{0};

  public:
  int maxPathSum(TreeNode* root)
  {
    sum_ = INT_MIN;
    pathSum(root);
    return sum_;
  }

  int pathSum(TreeNode* root)
  {
    if (root == nullptr)
      return 0;

    int left = max(0, pathSum(root->left));
    int right= max(0, pathSum(root->right));
    int cur_max = root->val + left + right;
    sum_ = max(cur_max, sum_);
    
    return root->val + max(left, right);
  }
};

int main()
{
  return 0;
}
