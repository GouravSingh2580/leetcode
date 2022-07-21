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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == 1) return reverseFirstN(head, right);
        head->next = reverseBetween(head->next, left - 1, right - 1);
        return head;
    }
    
    ListNode* successor;
    ListNode* reverseFirstN(ListNode* head, int n) {
        if (n == 1) {
            successor = head->next;
            return head;
        }
        ListNode* last = reverseFirstN(head->next, n - 1);
        head->next->next = head;
        head->next = successor;
        return last;
    }
};