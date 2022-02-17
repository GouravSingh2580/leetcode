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
    public ListNode getNode(int idx, ListNode head) {
      ListNode temp = head;
      for (int i = 0; i < idx; i++) {
        temp = temp.next;
      }
      return temp;
    }
    public ListNode reverseKGroup(ListNode head, int k) {
        
        if(head==null){
            return head;
        }
        int size=0;
        int l=0,r=k-1;
        int m=l,n=r;
        ListNode x=head;
        while(x!=null){
            size++;
            x=x.next;
        }
        
        for(int i=0;i<size/k;i++){
            while(l<r){
                ListNode a=getNode(l,head);
                ListNode b=getNode(r,head);
                
                int t=a.val;
                a.val=b.val;
                b.val=t;
                l++;
                r--;
            }
            m=m+k; n=n+k;
            l=m ; r=n;
        }
        return head;
    }
}