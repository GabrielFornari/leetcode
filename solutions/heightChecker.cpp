class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int orderedHeights[101] = {0};
        int j, count=0;
        
        for(int h : heights)
            orderedHeights[h]++;
        
        j=1;
        for(int h : heights){
            while(orderedHeights[j] == 0)
                j++;
            
            if(j != h)
                count++;
            
            orderedHeights[j]--;
        }
        return count;
    }
};