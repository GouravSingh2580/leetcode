/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null){
            return head;
        }
        else{
            ListNode i=head,j=null,t=null;
            
            while(i!=null){
                j=i.next;
                
                while(j!=null){
                    if(i.val==j.val){
                        i.next=j.next;
                    }
                    
                    j=j.next;
                }
                i=i.next;
            }
        }
        return head;
    }
}