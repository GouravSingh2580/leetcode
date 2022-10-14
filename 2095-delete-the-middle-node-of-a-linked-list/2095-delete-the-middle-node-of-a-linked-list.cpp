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
    ListNode* deleteMiddle(ListNode* head) {
        auto t=head;
        int c=0;
        while(t){
            c++;t=t->next;
        }
        if (c==1) return NULL;
        t=head;
        int half=c/2 -1;
        while(half--){
            t=t->next;
        }
        t->next=t->next->next;
        return head;
    }
};