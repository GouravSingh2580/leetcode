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
    ListNode* middleNode(ListNode* head) {
        ListNode* t=head;
        int c=0;
        while(t){
            c++; t=t->next;
        }
        c=c/2;
        t=head;
        while(c--){
            t=t->next;
        }
        return t;
    }
};