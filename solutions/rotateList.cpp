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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return nullptr;
        
        ListNode *curr = head;
        int size = 1;
        while(curr->next){
            curr = curr->next;
            size++;
        }
        curr->next = head;
        k %= size;
        k = size - k - 1;
        curr = head;
        for(size=0; size < k; size++)
            curr = curr->next;
        
        head = curr->next;
        curr->next = nullptr;
        return head;
    }
};