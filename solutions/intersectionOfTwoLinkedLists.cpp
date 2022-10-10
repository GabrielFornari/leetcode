/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curr_A = headA;
        ListNode *curr_B = headB;
        
        while(curr_A != curr_B){
            if(curr_A == nullptr)
                curr_A = headB;
            if(curr_B == nullptr)
                curr_B = headA;
            
            if(curr_A == curr_B)
                return curr_A;
            
            curr_A = curr_A->next;
            curr_B = curr_B->next;
        }
        return curr_A;
    }
};