/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    unordered_map<int, Node*> visited;
    
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return node;
        else
            return DFS(node);
    }

    Node *DFS(Node *cur){
        Node *curCopy = new Node(cur->val);
        visited[cur->val] = curCopy;
        
        //cout << cur->val << endl;
        
        for (Node *next : cur->neighbors) {
            if (visited.count(next->val) == 0)
                curCopy->neighbors.push_back(DFS(next));
            else
                curCopy->neighbors.push_back(visited[next->val]);
        }
        return curCopy;
    }
};