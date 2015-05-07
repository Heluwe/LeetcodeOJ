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
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode *p, *start;
		start = new ListNode(0);
		start->next = head;
		p = start;
		while (p->next != NULL) {
			if (p->next->next != NULL&&p->next->val == p->next->next->val)
				p->next = p->next->next;
			else p = p->next;
		}
		return start->next;
	}
};