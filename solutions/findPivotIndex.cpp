class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i, leftTotal = 0, rightTotal = 0;
        for(i=1; i<nums.size(); i++)
            rightTotal += nums[i];
        
        for(i=0; i<nums.size()-1; i++){
            if(leftTotal == rightTotal)
                return i;
            rightTotal -= nums[i+1];
            leftTotal += nums[i];
        }
        if(leftTotal == rightTotal)
            return i;
        else
            return -1;
    }
};