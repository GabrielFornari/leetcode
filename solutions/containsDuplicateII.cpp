class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hashMap;
        int i = 0;
        
        for(int num : nums){
            if(hashMap.count(num) > 0){
                if(abs(hashMap[num]-i) <= k)
                    return true;
                else
                    hashMap[num] = i;
            }
            else
                hashMap.insert(make_pair(num, i));
            i++;
        }
        return false;
    }
};