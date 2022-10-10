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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr = head;
        ListNode *tmp;
        
        while(curr && curr->next){
            if(curr->next->val == val){
                tmp = curr->next;
                curr->next = curr->next->next;
                delete tmp;
            }
            else
                curr = curr->next;
        }
        
        if(head && head->val == val){
            tmp = head;
            head = head->next;
            delete tmp;
        }
        return head;
    }
};