class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total, maxWealth = 0;
        
        for(int i=0; i<accounts.size(); i++){
            total = 0;
            for(int j=0; j<accounts[0].size(); j++)
                total += accounts[i][j];
            if(maxWealth < total)
                maxWealth = total;
        }
        return maxWealth;
    }
};