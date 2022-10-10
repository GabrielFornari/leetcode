class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int total = 1;
        
        for(int i=0; i < text.length(); i++){
            if(text[i] == ' ')
                total++;
            
            for(int j=0; j<brokenLetters.length(); j++){
                if(text[i] == brokenLetters[j]){
                    while(text[i+1] != ' ' && i+1 < text.length())
                        i++;
                    total--;
                    break;
                }
            }
        }
        return total;
    }
};