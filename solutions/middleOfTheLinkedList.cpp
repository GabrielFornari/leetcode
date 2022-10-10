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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp_head = head;
        int size = 0;
        while(tmp_head){
            size++;
            tmp_head = tmp_head->next;
        }
        tmp_head = head;
        //int middle = size%2 ? size/2 : size/2+1;
        for(int i=0; i<size/2; i++)
            tmp_head = tmp_head->next;
        
        return tmp_head;
    }
};