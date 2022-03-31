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
    vector<vector<int>> v;

    void pre(TreeNode *root, int depth)
    {
        if(root == NULL) return;
        if(v.size() == depth)
            v.push_back({});

        v[depth].push_back(root->val);
        pre(root->left, depth + 1);
        pre(root->right, depth + 1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        pre(root,0);
        return v;
    }
};