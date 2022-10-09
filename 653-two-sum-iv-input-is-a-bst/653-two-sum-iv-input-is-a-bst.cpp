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
    bool findTarget(TreeNode* root, int k) {
        stack<TreeNode*>st;
        unordered_map<int,int>mp;
        while(root or !st.empty()){
            while(root){
                st.push(root);
                if(mp[k-root->val]){
                    return true;
                }
                else mp[root->val]=1;
                root=root->left;
            }
            root=st.top();st.pop();
            root=root->right;
        }
        return false;
    }
};