class Solution {
public:
    string reverseWords(string s) {
        string out, tmp;
        int i;
        
        tmp = "";
        for(i=0; i<s.size(); i++){
            if(s[i] != ' '){
                tmp.insert(0, 1, s[i]);
            }
            else if(tmp.size() > 0){
                out += " " + tmp;
                tmp = "";
            }
        }
        if(tmp.size() > 0)
            out += " " + tmp;
        out.erase(0, 1);
        
        return out;
    }
};