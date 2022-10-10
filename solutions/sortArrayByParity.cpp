class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int count = 0, tmp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 != 0){
                count++;
            }
            else{
                if(count){
                    tmp = nums[i-count];
                    nums[i-count] = nums[i];
                    nums[i] = tmp;
                }
            }
        }
        return nums;
    }
};