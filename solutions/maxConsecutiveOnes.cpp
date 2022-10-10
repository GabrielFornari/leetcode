class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int maxUntilNow = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1)
                maxUntilNow++;
            else{
                if(max < maxUntilNow)
                    max = maxUntilNow;
                maxUntilNow = 0;
            }
        }
        if(max < maxUntilNow)
            max = maxUntilNow;
        return max;
    }
};