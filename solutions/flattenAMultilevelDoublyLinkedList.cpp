/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node *curr = head;
        Node *tmp, *tmp2;
        
        while(curr){
            if(curr->child){
                tmp = curr->next;
                curr->next = curr->child;
                
                curr->next->prev = curr;
                curr->child = nullptr;
                tmp2 = curr->next;
                while(tmp2->next)
                    tmp2 = tmp2->next;
                tmp2->next = tmp;
                if(tmp)
                    tmp->prev = tmp2;
            }
            curr = curr->next;
        }
        return head;
    }
};