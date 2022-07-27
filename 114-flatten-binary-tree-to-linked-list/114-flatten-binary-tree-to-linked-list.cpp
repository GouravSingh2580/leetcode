/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* dfs(TreeNode* root) {
      if (!root->left && !root->right) return root;
      if (root->left) {
          TreeNode* lastLeft = dfs(root->left);
          lastLeft->right = root->right;
          root->right = root->left;
          root->left = nullptr;
      }
     if(root->right) return dfs(root->right);
     return root;
    }
    void flatten(TreeNode* root) {
        if (!root) return;
        dfs(root);
    }
};