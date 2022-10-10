class Solution {
public:
    int lengthOfLastWord(string s) {
        int endOfWord = s.length()-1;
        int i;
        
        while(s[endOfWord] == ' ') // The strings have at least 1 word
            endOfWord--;
        i = endOfWord;
        while(i >= 0 && s[i] != ' ')
            i--;
        return endOfWord-i;
    }
};