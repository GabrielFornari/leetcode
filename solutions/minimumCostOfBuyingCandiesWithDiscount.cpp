class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total = 0;
        int i;
        
        sort(cost.rbegin(), cost.rend());
        for(i=0; i<cost.size()-1; i+=3)
            total += cost[i]+cost[i+1];
    
        if(i < cost.size())
            total += cost[i];
        
        return total;
    }
};