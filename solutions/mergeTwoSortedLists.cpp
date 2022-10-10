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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        
        ListNode *tmp, *pri, *sec;
        if(list1->val > list2->val){
            tmp = list1;
            list1 = list2;
            list2 = tmp;
        }
        pri = list1;
        sec = list2;
        while(pri->next && sec){
            if(pri->next->val > sec->val){
                tmp = pri->next;
                pri->next = sec;
                sec = sec->next;
                pri->next->next = tmp;
            }
            pri = pri->next;
        }
        if(sec)
            pri->next = sec;
        
        return list1;
    }
};