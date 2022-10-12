class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> biggestTemp;
        vector<int> waitingDays(temperatures.size(), 0);
        
        biggestTemp.push(temperatures.size()-1);
        for(int i=temperatures.size()-2; i>=0; i--){
            while(!biggestTemp.empty() && temperatures[i] >= temperatures[biggestTemp.top()])
                biggestTemp.pop();
            if(biggestTemp.empty()){
                biggestTemp.push(i);
            }
            else{
                waitingDays[i] = biggestTemp.top()-i;
                biggestTemp.push(i);
            }
        }
        return waitingDays;
    }
};