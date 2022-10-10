class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int biggest = -1, secBiggest = -1;
        int i, biggestIdx;
        for(i=0; i<nums.size(); i++){
            if(nums[i] > secBiggest){
                if(nums[i] > biggest){
                    secBiggest = biggest;
                    biggest = nums[i];
                    biggestIdx = i;
                }
                else
                    secBiggest = nums[i];
            }
        }
        if(biggest >= 2*secBiggest)
            return biggestIdx;
        else
            return -1;
    }
};