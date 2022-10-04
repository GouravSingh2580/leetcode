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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        
        // if(targetSum==0) return true;
        
        if (root->val == targetSum && root->left ==  NULL && root->right == NULL) return true;
        
        bool a=hasPathSum(root->left, targetSum-root->val);
        bool b=hasPathSum(root->right, targetSum-root->val);
        
        if(a or b) return true;
        
        return false;
    }
};