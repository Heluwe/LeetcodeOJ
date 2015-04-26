/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* p1,*st;
    st->next=head;
    p1=st;
    while(p1!=NULL&&p1->next!=NULL){
    while(p1->next!=NULL&&p1->next->val==val)
    p1->next=p1->next->next;
    p1=p1->next;
    }
    return st->next;
}