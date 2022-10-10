class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        int rest = 0;
        while(numBottles >= numExchange){
            rest = (numBottles % numExchange);
            numBottles /= numExchange;
            total += numBottles;
            numBottles += rest;
        }
        return total;
    }
};