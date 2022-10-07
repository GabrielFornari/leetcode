class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hashMap;
        int total=0;
        
        for(int i=0; i<s.size(); i++){
            if(hashMap.count(s[i]) > 0){
                i = hashMap[s[i]]+1;
                hashMap.clear();
            }
            hashMap.insert(make_pair(s[i], i));
            
            if(total < hashMap.size())
                total = hashMap.size();
        }
        return total;
    }
};