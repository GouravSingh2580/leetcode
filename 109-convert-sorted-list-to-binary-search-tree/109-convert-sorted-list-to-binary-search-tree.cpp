/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* makeTreefromArray(vector<int>&n, int left, int right){
        if(left>right) return nullptr;
        
        int mid=left+(right-left)/2;
        
        TreeNode* node= new TreeNode(n[mid]);
        
        node->left=makeTreefromArray(n, left, mid-1);
        node->right=makeTreefromArray(n, mid+1, right);
        
        return node;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        
        ListNode* t = head;
        while(t){
            v.push_back(t->val); t = t->next;
        }
        return makeTreefromArray(v,0,v.size()-1);
    }
};