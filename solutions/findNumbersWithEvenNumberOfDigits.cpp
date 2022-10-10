class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int nDigits = 0, total = 0;
        for(int number : nums){
            while(number > 0){
                number /= 10;
                nDigits++;
            }
            if(nDigits%2 == 0)
                total++;
            nDigits = 0;
        }
        return total;
        
    }
};