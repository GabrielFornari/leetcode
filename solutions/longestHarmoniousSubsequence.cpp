class Solution {
public:
    int findLHS(vector<int>& nums) {
        int start = 0;
        int swap = 1;
        int total = 0;
        
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[start] > 1)
                start = swap;
            if(nums[i]-nums[start] == 1)
                total = max(total, i-start+1);
            
            if(nums[i] != nums[swap])
                swap = i;
        }
        return total;
    }
};