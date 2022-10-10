class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryOne = 1;
        int i = digits.size()-1;
        
        while(carryOne && i >= 0){
            if(digits[i] + carryOne > 9)
                digits[i] = 0;
            else
                carryOne = 0;
            i--;
        }
        if(carryOne)
            digits.insert(digits.begin(), 1);
        else
            digits[++i]++;
        return digits;
    }
};