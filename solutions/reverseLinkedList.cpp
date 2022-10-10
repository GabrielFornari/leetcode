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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)
            return nullptr;
        
        ListNode* curr = head;
        ListNode* tmp = head;
        while(curr->next){
            tmp = curr->next->next;
            curr->next->next = head;
            head = curr->next;
            curr->next = tmp;
        }
        return head;
    }
};