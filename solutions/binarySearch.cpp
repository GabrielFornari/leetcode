class Solution {
public:
    int search(vector<int>& nums, int target) {
        int tail=0, head=nums.size()-1, avg;
        
        while(tail <= head){
            avg = (head+tail)/2;
            if(nums[avg] == target)
                return avg;
            if(nums[avg] < target)
                tail = avg+1;
            if(nums[avg] > target)
                head = avg-1;
        }
        return -1;
    }
};