class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int oldIdx, newIdx, num, tmp, qty;
        k %= nums.size();
        
        qty=0;
        for(int i=0; qty<nums.size(); i++){
            num = nums[i];
            oldIdx = i;
            newIdx = (oldIdx+k)%nums.size();
            while(newIdx != i){
                tmp = nums[newIdx];
                nums[newIdx] = num;
                num = tmp;
                
                oldIdx = newIdx;
                newIdx = (oldIdx+k)%nums.size();
                qty++;
            }
            nums[i] = num;
            qty++;
        }
    }
};

/*
while(idx+k < nums.size()){
    tmp = nums[idx+k];
    nums[idx+k] = oldNum;
    oldNum = tmp;
    idx += k;
}
*/