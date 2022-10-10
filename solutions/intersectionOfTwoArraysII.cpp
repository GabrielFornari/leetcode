class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> hashMap;
        vector<int> out;
        
        for(int a : nums1){
            if(hashMap.count(a) > 0)
                hashMap[a]++;
            else
                hashMap.insert(make_pair(a, 1));
        }
        for(int n : nums2){
            if(hashMap.count(n) > 0){
                if(hashMap[n] > 0){
                    out.push_back(n);
                    hashMap[n]--;
                }
            }
        }
        return out;
    }
};