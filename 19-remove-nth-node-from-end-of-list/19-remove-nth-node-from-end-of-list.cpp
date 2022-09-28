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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=0;
        auto t=head;
        while(t){
            x++;
            t=t->next;
        }
        t=head;
        x=x-n-1;
        if(x==-1) {
            t = t->next;
            return t;
        }
        else{
            while(x--){
                t=t->next;
            }
        }
        t->next = t->next->next;
        return head;
    }
};