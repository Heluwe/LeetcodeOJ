/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <vector>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> arr;
        ListNode *temp = head;
        for (; temp != NULL; temp = temp->next)
        {
            arr.push_back(temp->val);
        }
        int size = arr.size() - 1;
        int mid = size / 2;
        temp = head;
        for (int i = size; i > mid; i--,temp=temp->next)
        {
            if(temp->val!=arr[i])
                return false;
        }
        return true;
    }
};
