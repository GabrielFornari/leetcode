class Solution {
public:
    int strStr(string haystack, string needle) {
        int j;
        int totalSize = haystack.size()-needle.size();
        for(int i=0; i<=totalSize; i++){
            j=0;
            while(haystack[i+j] == needle[j] && j < needle.size())
                j++;
            
            if(j == needle.size())
                return i;
        }
        return -1;
    }
};