class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        
        for(int num : nums){
            if(hashset.count(num) > 0)
                return true;
            else
                hashset.insert(num);
        }
        return false;
    }
};