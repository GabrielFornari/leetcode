class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> out;
        int tmpIdx;
        
        for(int i=0; i<nums.size(); i++){
            tmpIdx = abs(nums[i])-1;
            if(nums[tmpIdx] > 0)
                nums[tmpIdx] = -nums[tmpIdx];
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0)
                out.push_back(i+1);
            else
                nums[i] = -nums[i];
        }
        return out;
    }
};

