/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        //iterative approach
        
        ListNode* temp = head;
        int len, i;
        
        for(len = 0; temp != NULL; temp = temp->next)
        {
            len++;
        }
        
        for(i = 0; i < (len/2); i++)
        {
            head = head->next;
        }
        
        return head;
    }
};