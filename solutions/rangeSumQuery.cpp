class NumArray {
public:
    vector<int> nums;
    
    NumArray(vector<int>& n) {
        nums.push_back(n[0]);
        
        //cout << n[0];
        for(int i=1; i<n.size(); i++){
            nums.push_back(n[i]+nums[i-1]);
            //cout << nums[i-1] << " ";
        }
        
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return nums[right];
        else
            return nums[right] - nums[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */