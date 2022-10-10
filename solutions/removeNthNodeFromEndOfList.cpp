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
        ListNode *curr = head;
        ListNode *tmp = head;
        
        for(int i=0; i<n; i++){
            if(tmp == nullptr)
                return head; // Error!
            tmp = tmp->next;
        }
        if(tmp == nullptr){
            head = curr->next;
            delete curr;
            return head;
        }
        while(tmp->next != nullptr){
            tmp = tmp->next;
            curr = curr->next;
        }
        tmp = curr->next;
        curr->next = curr->next->next;
        delete tmp;
        return head;
    }
};