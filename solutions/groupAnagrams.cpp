class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        unordered_map<string, int> hashMap;
        int groupIdx = 0;
        for(string str : strs){
            string key = str;
            sort(key.begin(), key.end());
            if(hashMap.count(key) > 0)
                out[hashMap[key]].push_back(str);
            else{
                hashMap.insert(make_pair(key, groupIdx));
                out.push_back({str});
                groupIdx++;
            }
        }
        return out;
    }
    
    int string2int(string str){
        int total = 0;
        for(char a : str)
            total += a;
        return total;
    }
};