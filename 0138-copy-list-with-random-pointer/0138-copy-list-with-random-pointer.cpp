/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node *ptr = head, *temp, *fast;
        while(ptr != NULL)
        {
            Node *copyNode = new Node(ptr -> val);
            copyNode -> next = ptr -> next;
            ptr -> next = copyNode;
            ptr = copyNode -> next;
        }
        
        ptr = head;
        
        while(ptr != NULL)
        {
            if(ptr -> random != NULL)
                ptr -> next -> random  = ptr -> random -> next;
            ptr = ptr -> next -> next;
            
        }
        
        ptr = head;
        
        Node *dummy = new Node(0);
        temp = dummy;
        
        while(ptr != NULL)
        {
            fast = ptr -> next -> next;
            temp -> next = ptr -> next;
            ptr -> next = fast;
            temp = temp -> next;
            ptr = fast;
        }
        
        return dummy -> next;

    }
};