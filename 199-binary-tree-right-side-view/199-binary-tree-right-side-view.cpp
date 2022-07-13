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
    vector<int>dp;
    void sol(TreeNode* root, int l){
        if(!root) return;
        if(l==size(dp)) dp.emplace_back(root->val);
        sol(root->right,l+1);
        sol(root->left,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int l=0; sol(root,l);
        return dp;
    }
};