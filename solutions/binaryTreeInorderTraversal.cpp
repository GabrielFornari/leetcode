/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //Solution using stack (and set)
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        set<TreeNode*> visited;
        stack<TreeNode*> st;
        
        if(root)
            st.push(root);
        while(!st.empty()) {
            //cout << st.top()->val << endl;
            if(st.top()->left && visited.count(st.top()->left) == 0){
                st.push(st.top()->left);
            }
            else{
                if(visited.count(st.top()) == 0){
                    nums.push_back(st.top()->val);
                    visited.insert(st.top());
                }
                if(st.top()->right && visited.count(st.top()->right) == 0)
                    st.push(st.top()->right);
                else
                    st.pop();
            }
        }
        return nums;
    }
    
    // Recursive solution
    vector<int> inorderTraversal_recursive(TreeNode* root) {
        vector<int> nums;
        if(root)
            recursiveSolution(nums, root);
        return nums;
    }
    void recursiveSolution(vector<int>& nums, TreeNode *cur){
        if(cur->left)
            recursiveSolution(nums, cur->left);
        nums.push_back(cur->val);
        if(cur->right)
            recursiveSolution(nums, cur->right);
    }
};