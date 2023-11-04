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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if((head == NULL) || (k <= 1) || (head -> next == NULL))
            return head;
    
        ListNode *dummy = new ListNode(0, head);
        ListNode *cur = dummy, *nex = dummy, * pre = dummy;
        
        int len, i;
        
        for(len = 0; head != NULL; len++, head = head->next);
        
        while( len >= k)
        {
            cur = pre -> next;
            nex = cur -> next;
            
            for(i = 1; i < k; i++)
            {
                cur -> next = nex -> next;
                nex -> next = pre -> next;
                pre -> next = nex;
                nex = cur -> next;
            }
            
            pre = cur;
            len -= k;
        }
        
        return dummy -> next;
        
    }
};