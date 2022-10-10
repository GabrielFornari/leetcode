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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        
        ListNode *tmp, *lastOdd = head;
        ListNode *curr = head->next; 
        while(curr && curr->next){
            tmp = curr->next;
            curr->next = curr->next->next;
            tmp->next = lastOdd->next;
            lastOdd->next = tmp;
            
            lastOdd = lastOdd->next;
            curr = curr->next;
        }
        return head;
    }
};