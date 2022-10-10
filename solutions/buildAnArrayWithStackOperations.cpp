class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> out;
        int i=1;
        for(int j : target){
            while(i < j){
                out.push_back("Push");
                out.push_back("Pop");
                i++;
            }
            if(i == j)
                out.push_back("Push");
            i++;
        }
        return out;
    }
};