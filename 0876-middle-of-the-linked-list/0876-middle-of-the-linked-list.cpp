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
        
        //two pointers approach
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast == NULL)
                break;
            fast = fast->next;
            slow = slow->next;
        }
        
        return slow;
        
//         for(len = 0; temp != NULL; temp = temp->next)
//         {
//             len++;
//         }
        
//         for(i = 0; i < (len/2); i++)
//         {
//             head = head->next;
//         }
        
    }
};