/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
//      **********    Method 1    **********
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB){
	struct ListNode *p1 = headA;
	struct ListNode *p2 = headB;
	if (p1 == NULL || p2 == NULL) return NULL;      //  1.there are no a intersection  how to deal with ? because the null is the common node they pass through
	while (p1 != p2) {                               //   2.suppose a and b resprent the separate two linklist before the intersection ,
													 //	 c is the linklist form intersection to end.                                                                      
		p1 = p1->next;                              //   we could make a verdict that (a+c)+b=(b+c)+a.
		p2 = p2->next;                              // so the extraordinarily important procedure is p1=headB  p2=headA.
		if (p1 == p2) return p1;
		if (p1 == NULL) p1 = headB;
		if (p2 == NULL) p2 = headA;
	}
	return p1;
}


//    **********    Method 2    **********
int length(struct ListNode *head){
	struct ListNode *p = head;
	int count = 0;
	while (p) {
		p = p->next;
		count++;
	}
	return count;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB){
	int lengthA, lengthB;
	struct ListNode *p = headA, *q = headB;
	lengthA = length(headA);
	lengthB = length(headB)

		while (lengthA > lengthB&&p){
			p = p->next;
			lengthA--;
		}
	while (lengthA < lengthB&&q){
		q = q->next;
		lengthB--;
	}

	while (p != q&&q&&p){
		p = p->next;
		q = q->next;
	}

	if (q == p)
		return q;
	else
		return NULL;
}
