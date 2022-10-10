class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int iLetter = 0;
        size_t pos = -1;
        while(magazine[iLetter] != '\0'){
            pos = ransomNote.find(magazine[iLetter]);
            if(pos != -1) // if exists
                ransomNote.replace(pos, 1, "");
            iLetter++;
        }
        if(ransomNote.empty())
            return true;
        else
            return false;
    }
};