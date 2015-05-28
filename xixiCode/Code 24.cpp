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
	ListNode* swapPairs(ListNode* head) {
		ListNode *tmp, *p, *start, *last;
		last = start = new ListNode(0);
		p = start->next = head;
		if (p != NULL&&p->next != NULL)start->next = head->next;
		while (p != NULL&&p->next != NULL){
			tmp = p->next;
			p->next = p->next->next;
			tmp->next = p;
			last->next = tmp;
			last = tmp->next;//1->2->3->4,save 1,1 is the link node
			p = p->next;
		}
		return start->next;
	}
};