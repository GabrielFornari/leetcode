class Solution {
public:
    // I remember solving the same problem when I was in the university =)
    bool isValid(string s) {
        stack<char> parentheses;
        for(char a : s){
            if(a == '(' || a == '[' || a == '{'){
                parentheses.push(a);
            }
            else{
                if(parentheses.empty())
                    return false;
                if(a == ')' && parentheses.top() != '(')
                    return false;
                if((a == ']' || a == '}') && parentheses.top() != a-2)
                    return false;
                parentheses.pop();
            }
        }
        if(parentheses.empty())
            return true;
        else
            return false;
    }
};