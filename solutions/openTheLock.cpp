class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        set<string> deadendsSet;
        queue<string> toVisit;
        queue<int> steps2Visit;
        int steps;
        
        for(string s : deadends){
            if(s == "0000")
                return -1;
            deadendsSet.insert(s);
        }
        
        toVisit.push("0000");
        steps2Visit.push(0);
        deadendsSet.insert("0000"); //make sure to not revisit origin
        while(!toVisit.empty()){
            string currentCode = toVisit.front();
            toVisit.pop();
            steps = steps2Visit.front();
            steps2Visit.pop();
            
            if(currentCode == target)
                return steps;
            
            steps++;
            // add all valid possibilities to queue
            string nextCode = currentCode;
            for(int digit=0; digit<4; digit++){
                if(nextCode[digit] == '9')
                    nextCode[digit] = '0';
                else
                    nextCode[digit]++;
                if(deadendsSet.count(nextCode) == 0){
                    toVisit.push(nextCode);
                    steps2Visit.push(steps);
                    deadendsSet.insert(nextCode);
                }
                nextCode = currentCode;
                if(nextCode[digit] == '0')
                    nextCode[digit] = '9';
                else
                    nextCode[digit]--;
                if(deadendsSet.count(nextCode) == 0){
                    toVisit.push(nextCode);
                    steps2Visit.push(steps);
                    deadendsSet.insert(nextCode);
                }
                nextCode = currentCode;
            }
        }
        return -1;
    }
};