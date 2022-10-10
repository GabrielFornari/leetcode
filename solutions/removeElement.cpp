class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int tail = 0;
        for(int head=0; head<nums.size(); head++){
            if(nums[head] != val){
                if(nums[tail] == val){
                    nums[tail] = nums[head];
                    nums[head] = val;
                }
                tail++;
            }
            for(int i : nums)
                cout << i << " - ";
            cout << "\n";
        }
        
        return tail;
    }
};