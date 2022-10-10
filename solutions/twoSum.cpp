class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        int i=0;
        for(int num : nums){
            hashMap.insert(make_pair(num, i));
            i++;
        }
        
        for(i=0; i<nums.size(); i++){
            if(hashMap.count(target-nums[i]) > 0 && hashMap[target-nums[i]] != i)
                break;
        }
        return vector<int> {i, hashMap[target-nums[i]]};
    }
};