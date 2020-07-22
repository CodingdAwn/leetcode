/**
 * File    : main.cpp
 * Author  : dAwn_
 * Date    : 07.07.2020
 * Purposes: 112_路径总和
 *           https://leetcode-cn.com/problems/path-sum/
 */
#include <iostream>

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
  bool hasPathSum(TreeNode* root, int sum)
  {
    if (root == nullptr)
      return false;

    // 如果是叶子节点的话 判断节点值 是否等于sum即可
    if (root->left == nullptr && root->right == nullptr)
      return sum == root->val;

    return hasPathSum(root->left, sum - root->val) ||
           hasPathSum(root->right, sum - root->val);
  }
};

int main()
{
  Solution s;
  TreeNode* root = new TreeNode(5);
  root->left = new TreeNode(4);
  root->right= new TreeNode(8);
  root->left->left = new TreeNode(11);
  root->right->left = new TreeNode(13);
  root->right->right= new TreeNode(4);
  root->right->right->right = new TreeNode(1);
  root->left->left->left = new TreeNode(7);
  root->left->left->right = new TreeNode(2);

  auto ret = s.hasPathSum(root, 22);
  cout << "result is " << ret << endl;
  cout << "expect result is true" << endl;
  return 0;
}
