/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

// be cautions about the target node are sequential.
public class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode rear,front;
        ListNode node = new ListNode(0);
        node.next=head;
        rear=front=node;
        n++;     
        while(n--!=0)
        front=front.next;
        while(front!=null){  
           front=front.next;
           rear=rear.next;
       }
      rear.next=rear.next.next;  
        return node.next;
    }
}