class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> out(nums.size());
        int i=0, j=nums.size()-1;
        for(int k=nums.size()-1; k>=0; k--){
            if(abs(nums[i]) < abs(nums[j])){
                out[k] = nums[j]*nums[j];
                j--;
            }
            else{
                out[k] = nums[i]*nums[i];
                i++;
            }
        }
        return out;
    }
};