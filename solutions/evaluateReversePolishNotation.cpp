class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long int> st;
        long int a, b;
        for(string token : tokens){
            if(*token.c_str() >= '0' || token.size() > 1){
                st.push(stoi(token));
            }
            else{
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                if(token == "+")
                    st.push(a+b);
                if(token == "-")
                    st.push(a-b);
                if(token == "/")
                    st.push(a/b);
                if(token == "*")
                    st.push(a*b);
            }
        }
        return st.top();
    }
};