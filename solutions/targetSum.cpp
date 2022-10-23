class Solution {
private:
    vector<int> nums;
    int target;
    
public:
    int findTargetSumWays(vector<int>& ns, int tgt) {
        nums = ns;
        target = tgt;
        return DFS(0, 0);
    }
    
    
    int DFS(int sum, int cur) {
        if(cur == nums.size())
            return sum == target;
        
        return DFS(sum+nums[cur], cur+1) + DFS(sum-nums[cur], cur+1);
    }
};