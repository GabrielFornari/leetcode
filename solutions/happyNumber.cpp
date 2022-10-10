class Solution {
public:
    bool isHappy(int n) {
        int sum = squaredSum(n);
        //unordered_set<int> history;
        while(sum != 1){
            sum = squaredSum(sum);
            //if(history.count(sum) > 0)
            if(sum == 4)
                return false;
            //history.insert(sum);
        }
        return true;
    }
private:
    int squaredSum(int n){
        int sum = 0;
        while(n != 0){
            sum += pow(n%10, 2);
            n /= 10;
        }
        return sum;
    }
};