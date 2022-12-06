class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd  = new ListNode (0);
        ListNode *even = new ListNode (0);
        
        ListNode *oddNode  = odd;
        ListNode *evenNode = even; 
        
        ListNode *temp = head;
        
        int i = 1;
        
        while(temp) {
            if(i%2==0) {
                evenNode->next = temp;
                evenNode = evenNode->next;
                i = 1;
            }else {
                oddNode->next = temp;
                oddNode = oddNode->next;
                i = 2;
            }
            
            temp = temp->next;
        }    
        
        evenNode->next = NULL;
        oddNode->next = even->next;
        
        return odd->next;
    }
};