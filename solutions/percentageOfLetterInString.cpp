class Solution {
public:
    int percentageLetter(string s, char letter) {
        int letterCount = 0;
        
        for(int i=0; i<s.size(); i++)
            if(s[i] == letter)
                letterCount++;
        
        return (100*letterCount)/s.size();
    }
};