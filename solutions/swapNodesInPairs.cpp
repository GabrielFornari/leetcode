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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* swapNode = head;
        ListNode* nextNode;
        ListNode* prevNode;
        
        head = head->next;
        
        nextNode = swapNode->next;
        swapNode->next = swapNode->next->next;
        nextNode->next = swapNode;
        prevNode = swapNode;
        swapNode = swapNode->next;
        while(swapNode != nullptr && swapNode->next != nullptr){
            prevNode->next = prevNode->next->next;
            
            nextNode = swapNode->next;
            swapNode->next = swapNode->next->next;
            nextNode->next = swapNode;
            prevNode = swapNode;
            swapNode = swapNode->next;
        }    
        return head;
    }
};