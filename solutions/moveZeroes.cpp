class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zerosCount = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zerosCount++;
            }
            else{
                if(zerosCount){
                    nums[i-zerosCount] = nums[i];
                    nums[i] = 0;
                }
            }
        }
    }
};