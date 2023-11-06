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
        unordered_map<Node*, Node*> hashMap;
        
        Node *ptr = head, *copyNode;
        while(ptr != NULL)
        {
            Node *copyNode = new Node(ptr -> val);
            hashMap[ptr] = copyNode;
            ptr = ptr -> next;
        }
        
        ptr = head;
        
        while(ptr != NULL)
        {
            copyNode = hashMap[ptr];
            if(ptr -> next != NULL)
                copyNode -> next = hashMap[ptr -> next];
            if(ptr -> random != NULL)
                copyNode -> random = hashMap[ptr -> random];
            ptr = ptr -> next;
        }
        
        return hashMap[head];
    }
};