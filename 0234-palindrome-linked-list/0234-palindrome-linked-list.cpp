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
    bool isPalindrome(ListNode* head) {
        
        if(head -> next == NULL)
            return true;

        ListNode *fast=head, *slow=head, *prev=NULL;
        
        while((fast != NULL) && (fast->next !=NULL))
        {
            head=head->next;
            fast=fast->next->next;
            slow->next=prev;
            prev=slow;
            slow=head;
        }

        
        if(fast != NULL)
        {
            fast = head -> next;
        }
        else
        {
            fast = head;
        }

        while(fast != NULL){
            if(fast -> val != prev -> val)
                return false;
            fast = fast->next;
            prev = prev->next;
        }
        return true;
      
    }
};