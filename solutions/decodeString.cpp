class Solution {
    int i=0;
    
public:
    string decodeString(string s) {
        return decode(s);
    }
    
    string decode(string s){
        int num=0, digitLength=0;
        string expr = "";
        string out = "";
        
        while(s[i] != ']' && i < s.size()){
            if(isalpha(s[i])){
                out += s[i];
                i++;
            }
            if(isdigit(s[i])){
                while(s[i] != '['){
                    digitLength++;
                    i++;
                }
                num = stoi(s.substr(i-digitLength));
                digitLength = 0;
                i++; // skip '['
                string tmp = decode(s);
                i++; // skip ']'
                for(int j=0; j<num; j++)
                     out += tmp;
            }   
        }
        return out;
    }
};