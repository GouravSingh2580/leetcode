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
    map<int,int> m;
    void travel(TreeNode* root,int l){
        if(!root)
            return;
        m[l]+=root->val;
        travel(root->left,l+1);
        travel(root->right,l+1);
    }
        
    int maxLevelSum(TreeNode* root) {
        travel(root,1);
        int s=INT_MIN,l=-1;
        for (const auto& [idx, sum] : m) {
            if(s<sum){
                s=sum;
                l=idx;
            }
        }
        return l;
    }
};