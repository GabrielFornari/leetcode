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
        if(!head)
            return nullptr;
        
        Node *tmp, *curr = head;
        while(curr){
            tmp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = tmp;
            curr = tmp;
        }
        curr = head; 
        while(curr){
            if(curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }
        Node *newHead = head->next;
        curr = head;
        tmp = newHead;
        while(curr){
            curr->next = curr->next->next;
            if(tmp->next)
                tmp->next = tmp->next->next;
            curr = curr->next;
            tmp = tmp->next;
        }
        return newHead;
    }
};