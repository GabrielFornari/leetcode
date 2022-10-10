class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroup = 0;
        int currGroup = 0;
        int total = 0;
        char currentBinary = s[0];
        int count = 1;
        
        // Sum all 0's and 1's and store in a vector
        for(int i=1; i<s.size(); i++){
            if(currentBinary != s[i]){
                currentBinary = s[i];
                if(prevGroup < count)
                    total += prevGroup;
                else
                    total += count;
                prevGroup = count;
                count = 1;
            }
            else{
                count++;
            }   
        }
        if(prevGroup < count) // Include the last group
            total += prevGroup;
        else
            total += count;
        return total;
    }
};