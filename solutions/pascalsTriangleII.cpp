class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascal = {1};
        for(int i=0; i<rowIndex; i++){
            for(int j=pascal.size()-1; j > 0; j--)
                pascal[j] += pascal[j-1];
            pascal.push_back(1);
        }
        return pascal;
    }
};