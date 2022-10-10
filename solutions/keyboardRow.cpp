class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string firstRow = "qwertyuiop";
        string secndRow = "asdfghjkl";
        //string thirdRow = "zxcvbnm";
        vector<string> output;
        int inRow1, inRow2, inRow3;
        
        for(string word : words){
            inRow1 = 0;
            inRow2 = 0;
            inRow3 = 0;
            
            //lowercase
            for(char letter : word){
                if (firstRow.find(tolower(letter)) != string::npos)
                    inRow1++;
                else if (secndRow.find(tolower(letter)) != string::npos)
                    inRow2++;
                else
                    inRow3++;
            }
            //cout << inRow1 << " - " << inRow2 << " - " << inRow3 << " -- "<< word.size() << "\n";
            if(inRow1 == word.size() || inRow2 == word.size() || inRow3 == word.size())
                output.push_back(word);
        }
        return output;
    }
};