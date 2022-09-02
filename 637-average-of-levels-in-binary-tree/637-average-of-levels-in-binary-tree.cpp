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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            long level_sum=0;
            auto n=q.size();
            for(int i=0;i<n;i++){
                auto t=q.front(); q.pop();
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
                level_sum+=t->val;
            }
            auto res=(double)level_sum/n;
            v.push_back(res);
        }
        return v;
    }
};