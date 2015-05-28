/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode *detectCycle(ListNode *head) {
		ListNode *fast, *slow;
		fast = slow = head;
		while (fast != NULL&&fast->next != NULL&&slow != NULL) {
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow) {
				fast = head;
				while (fast != slow) {
					fast = fast->next; slow = slow->next;
				}
				return fast;
			}
		}
		return NULL;
	}
};