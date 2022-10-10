class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int tail = 1, val;
        val = nums[0];
        for(int head=1; head<nums.size(); head++){
            if(nums[head] != val){
                nums[tail] = nums[head];
                val = nums[head];
                tail++;
            }
        }
        return tail;
    }
};