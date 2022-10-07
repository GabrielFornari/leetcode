class Solution {
public:
    int numSquares(int n) {
        set<int> visited;
        queue<int> toVisit;
        int steps = 1, currentSum = 0;
        
        for(int i=1; i*i<=n; i++)
            toVisit.push(i*i);
        
        while(!toVisit.empty()){
            int queueSize = toVisit.size();
            for(int i=0; i<queueSize; i++){
                currentSum = toVisit.front();
                toVisit.pop();
                
                if(currentSum == n)
                    return steps;
                
                for(int j=1; j*j+currentSum<=n; j++){
                    if(visited.count(currentSum+j*j) == 0){
                        toVisit.push(currentSum+j*j);
                        visited.insert(currentSum+j*j);
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};