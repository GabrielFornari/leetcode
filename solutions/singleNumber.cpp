class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hashmap;
        
        for(int num : nums){
            if(hashmap.find(num) == hashmap.end())
                hashmap.insert({num, 1});
            else
                hashmap.find(num)->second++;
        }

        for(auto it : hashmap)
            if(it.second == 1)
                return it.first;
        
        return 0;
    }
};