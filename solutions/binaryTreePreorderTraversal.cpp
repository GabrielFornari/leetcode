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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> treeVals(0);
        stack<TreeNode*> rootsToVisit;
        rootsToVisit.push(root);
        TreeNode* currentRoot;
        while(!rootsToVisit.empty()){
            currentRoot = rootsToVisit.top();
            rootsToVisit.pop();
            
            if(currentRoot != nullptr){
                treeVals.push_back(currentRoot->val);    
                rootsToVisit.push(currentRoot->right);
                rootsToVisit.push(currentRoot->left);
            }            
        }
        
        return treeVals;
    }
};


/***************************************************

vector<int> treeVals(0);
        vector<TreeNode*> tmpRoots(1,nullptr);
        TreeNode* currentRoot = root;
        while(currentRoot != nullptr){
            
            treeVals.push_back(currentRoot->val);
            
            if(currentRoot->right != nullptr)
                tmpRoots.push_back(currentRoot->right);
            if(currentRoot->left != nullptr)
                tmpRoots.push_back(currentRoot->left);
            
            currentRoot = tmpRoots.back();
            tmpRoots.pop_back();
        }
        
/***************************************************/
