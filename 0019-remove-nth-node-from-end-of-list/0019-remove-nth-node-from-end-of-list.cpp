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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            if (head == nullptr) return nullptr; // Handle empty list

                int length = 0;
                ListNode* current = head;

                // Calculate the length of the list
                while (current != nullptr) {
                    length++;
                    current = current->next;
                }

                // Handle the case where n is equal to the length of the list
                if (n == length) {
                    ListNode* toRemove = head;
                    head = head->next;
                    delete toRemove;
                    return head;
                }

                int indexToRemove = length - n;
                current = head;

                // Iterate to the (n-1) node
                for (int i = 0; i < indexToRemove - 1; i++) {
                    current = current->next;
                }

                // Remove the nth node by updating the next pointer
                ListNode* toRemove = current->next;
                current->next = toRemove->next;
                delete toRemove;

                return head;
        }
};