/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        set<TreeNode*> st;
        TreeNode* t=root,* lst;
        while(1){
            st.insert(t);
            if(t==p)break;
            if(p->val>t->val) t= t->right;
            else t=t->left;
        }
        t=root;
        while(1){
            if(st.find(t)!=st.end()) lst=t;
            if(t==q)break;
            if(q->val>t->val) t= t->right;
            else t=t->left;
        }
        return lst;
    }
};