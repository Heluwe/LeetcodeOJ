/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /****************method 1******************/
// start¡ú1¡ú2¡únull
//1: start¡ú2¡únull
//       1¨J    
// 2:start¡ú2 null
//          1¨J 
// 3: start¡ú2¨K  null
//            1¨J 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p1,*p2;
        ListNode *start=new ListNode(0);
        if(head==NULL)return head;
        start->next=head;
        p1=head;
        while(p1->next!=NULL){
          p2=start->next;//save head for 3
          start->next=p1->next;//1
          p1->next=start->next->next; //2
          start->next->next=p2;//3
        }
        return start->next;
    }
};

 /****************method 2******************/
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode *p1, *p2, *p3;
		if (head == NULL)return head;
		p1 = head; p2 = p1->next;
		p1->next = NULL;
		while (p2 != NULL) {
			p3 = p2->next;
			p2->next = p1;
			p1 = p2;
			p2 = p3;
		}
		return p1;
	}
};
 
 
 
 
 
 
 