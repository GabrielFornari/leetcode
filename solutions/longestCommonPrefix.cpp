class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int j;
        for(int i=1; i<strs.size(); i++){  
            for(j=0; j<prefix.size() && j<strs[i].size(); j++)
                if(prefix[j] != strs[i][j])
                    break;
            prefix.erase(prefix.begin()+j, prefix.end());
        }
        return prefix;
    }
};