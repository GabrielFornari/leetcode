class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hashset;
        unordered_set<int> hashset2;
        vector<int> out;
        for(int num : nums1)
            hashset.insert(num);
        for(int num : nums2)
            if(hashset.count(num) > 0)
                hashset2.insert(num);
        
        for(auto it = hashset2.begin(); it != hashset2.end(); it++)
            out.push_back(*it);
        return out;
    }
};