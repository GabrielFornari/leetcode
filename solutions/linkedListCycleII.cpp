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
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> checkedNodes;
        ListNode *curr = head;
        int count = 0;
        
        while(curr != nullptr){
            if(checkedNodes.find(curr) != checkedNodes.end())
                return curr;
            
            checkedNodes.insert(curr);
            curr = curr->next;
        }
        /*
        auto pos = checkedNodes.find(head);
        for (auto it = pos; it != checkedNodes.end(); it++)
            cout << *it << " ";
        */
        return nullptr;
    }
};