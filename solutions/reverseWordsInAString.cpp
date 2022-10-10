class Solution {
public:
    string reverseWords(string s) {
        string out, tmp;
        int i;
        
        tmp = "";
        for(i=0; i<s.size(); i++){
            if(s[i] != ' '){
                tmp += s[i];
            }
            else if(tmp.size() > 0){
                out.insert(0, tmp);
                out.insert(0, 1, ' ');
                tmp = "";
            }
        }
        if(tmp.size() > 0)
            out.insert(0, tmp);
        else
            out.erase(0, 1);
        
        return out;
    }
};