/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {
	struct ListNode *l, *cur;
	if (!l1 || !l2)return l1 ? l1 : l2;
	if (l1->val < l2->val) {
		l = l1;
		l1 = l1->next;
	}
	else {
		l = l2;
		l2 = l2->next;
	}
	cur = l;
	while (l1&&l2) {
		if (l1->val < l2->val) {
			cur->next = l1;
			l1 = l1->next;
		}
		else {
			cur->next = l2;
			l2 = l2->next;
		}
		cur = cur->next;
	}
	if (!l1)
		cur->next = l2;
	else
		cur->next = l1;
	return l;
}