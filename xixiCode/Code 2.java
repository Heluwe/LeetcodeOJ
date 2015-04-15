/**
* Definition for singly-linked list.
* public class ListNode {
*     int val;
*     ListNode next;
*     ListNode(int x) {
*         val = x;
*         next = null;
*     }
* }
*/
public class Solution{
	public ListNode addTwoNumbers(ListNode l1, ListNode l2){
		int val = 0, x = 0, nextval = 0;
		ListNode L = new ListNode(0);
		ListNode l3 = L;
		while (l1 != null || l2 != null){
			if (l1 == null){
				val = l2.val;
				l2 = l2.next;
			}
			else if (l2 == null){
				val = l1.val;
				l1 = l1.next;
			}
			else{
				val = l1.val + l2.val;
				l1 = l1.next;
				l2 = l2.next;
			}
			val += nextval;
			if (val >= 10){
				val -= 10;
				x = 1;
			}
			else x = 0;
			l3.next = new ListNode(val);
			l3 = l3.next;
			if (x == 1)
				nextval = 1;
			else
				nextval = 0;
		}
		if (x == 1)
			l3.next = new ListNode(1);
		return L.next;
	}
}