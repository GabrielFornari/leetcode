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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        ListNode *curr1 = l1, *curr2 = l2;
        int digitSum;
        int carryOne = 0;
        
        while(curr1->next){
            if(curr2){
                digitSum = curr1->val + curr2->val + carryOne;
                curr2 = curr2->next;
            }
            else{
                digitSum = curr1->val + carryOne;
            }
            curr1->val = digitSum % 10;
            carryOne = digitSum / 10;
            curr1 = curr1->next;
        }
        if(curr2){
            digitSum = curr1->val + curr2->val + carryOne;
            curr2 = curr2->next;
        }
        else{
            digitSum = curr1->val + carryOne;
        }
        curr1->val = digitSum % 10;
        carryOne = digitSum / 10;
        
        while(curr2){
            digitSum = curr2->val + carryOne;
            curr1->next = new ListNode(digitSum % 10);
            carryOne = digitSum / 10;
            
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        if(carryOne)
            curr1->next = new ListNode(carryOne);
        
        return l1;
    }
};