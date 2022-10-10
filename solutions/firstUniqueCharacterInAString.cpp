class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> hashMap;
        
        for(char a : s){
            if(hashMap.count(a) > 0)
                hashMap[a]++;
            else
                hashMap.insert(make_pair(a, 1));
        }
        for(int i=0; i<s.size(); i++){
            if(hashMap[s[i]] == 1)
                return i;
        }
        return -1;
    }
};