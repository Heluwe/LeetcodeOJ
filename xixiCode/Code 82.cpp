class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode *start = new ListNode(0), *p1;
		bool rem = false;
		start->next = head;
		p1 = start;
		while (p1->next != NULL&&p1->next->next != NULL) {
			if (p1->next->next->val == p1->next->val) {
				p1->next = p1->next->next;
				rem = true;
			}
			else {
				if (rem) {
					p1->next = p1->next->next;
					rem = false;
				}
				else p1 = p1->next;
			}
		}
		if (rem) p1->next = NULL;
		return start->next;
	}
};
