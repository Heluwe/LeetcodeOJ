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
    int lenght(ListNode *a)
    {
        int i=0;
        while(a!=NULL)
        {
            i++;a=a->next;
        }
        return i;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *p1=headA,*p2=headB;
        int a=lenght(headA),b=lenght(headB);
        while(a>b&&p1)
        {
            p1=p1->next;
            a--;
        }
        while(b>a&&p2)
        {
            p2=p2->next;
            b--;
        }
        while(p1!=p2&&p1&&p2)
        {
            p1=p1->next;
            p2=p2->next;
        }
        if(p1==p2)
            return p1;
        else
            return NULL;
    }
};