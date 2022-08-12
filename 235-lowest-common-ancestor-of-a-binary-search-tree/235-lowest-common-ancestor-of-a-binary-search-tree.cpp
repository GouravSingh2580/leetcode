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
        // recur or iterative
        multiset<TreeNode*>st;
        TreeNode* t=root, *res;
        
        while(1){
            st.insert(t); //  insert root
            if(t==p) break;
            if(t->val>p->val) t=t->left;
            else t=t->right;
        }
        
        t=root;
        while(1){
            if(st.find(t)!=st.end()) res=t;
            if(t==q) break;
            if(t->val<q->val) t=t->right;
            else t=t->left;
        }
        
        return res;
    }
};