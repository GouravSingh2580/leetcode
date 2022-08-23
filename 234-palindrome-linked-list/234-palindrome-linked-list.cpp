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
class Solution {
public:
    bool isp(vector<int>v){
        int l=0;
        int r=v.size()-1;
        
        while(l<r){
            if(v[l++]!=v[r--]) return false;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        return isp(v);
    }
};