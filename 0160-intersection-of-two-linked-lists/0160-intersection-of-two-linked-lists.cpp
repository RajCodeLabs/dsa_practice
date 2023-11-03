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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *dummy1 = headA, *dummy2 = headB;
        int i, diff, len1 = 0, len2 = 0;
        
        while((dummy1 != NULL) || (dummy2 != NULL))
        {
            if((dummy1 != NULL))
            {
                len1++;
                dummy1 = dummy1 -> next;
            }
            
            if((dummy2 != NULL))
            {
                len2++;
                dummy2 = dummy2 -> next;
            }         
        }
        
        dummy1 = headA;
        dummy2 = headB;

        if(len1 > len2)
        {
            diff = len1 - len2;
            for(i = 0; i < diff; i++)
            {
                dummy1 = dummy1 -> next;
            }
        }

        else
        {
            diff = len2 - len1;
            for(i = 0; i < diff; i++)
            {
                dummy2 = dummy2 -> next;
            }
        }

        while((dummy1 != NULL) && (dummy2 != NULL))
        {
            if(dummy1 == dummy2)
                return dummy1;

            dummy1 = dummy1 -> next;
            dummy2 = dummy2 -> next;
        }

        return NULL;
    }
};