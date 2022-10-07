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
    unordered_map<string, vector<TreeNode*>> map;
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> out;
        buildMap(root);
        
        for(auto it=map.begin(); it!=map.end(); it++){
            if(it->second.size() > 1)
                out.push_back(it->second[0]);
        }
        return out;
    }
    
    string buildMap(TreeNode* node) {
        if(!node) 
            return "";
        string s = "(" + buildMap(node->left) + to_string(node->val) + buildMap(node->right) + ")";
        map[s].push_back(node);
        return s;
    }
};