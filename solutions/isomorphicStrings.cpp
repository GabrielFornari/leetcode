class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> hashMap;
        unordered_map<char, char> hashMap2;
        
        for(int i=0; i<s.size(); i++){
            if(hashMap.count(s[i]) > 0){
                if(hashMap[s[i]] != t[i])
                    return false;
            }
            else
                hashMap.insert(make_pair(s[i], t[i]));
            
            if(hashMap2.count(t[i]) > 0){
                if(hashMap2[t[i]] != s[i])
                    return false;
            }
            else
                hashMap2.insert(make_pair(t[i], s[i]));
                
        }
        return true;
    }
};