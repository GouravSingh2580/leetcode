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
     int goodNodes(TreeNode* root,int maxi=-100000) {
        if(root==nullptr)
            return 0;
        return goodNodes(root->left,max(maxi,root->val))+goodNodes(root->right,max(maxi,root->val))+(root->val>=maxi);
    }
};