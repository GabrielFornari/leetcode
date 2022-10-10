class Solution {
public:
    bool isThree(int n) {
        int nDivisors = 1;
        for(int divisor=2; divisor<=n; divisor++){
            if(nDivisors > 3)
                return false;
            if(n%divisor == 0)
                nDivisors++;
        }
        if(nDivisors == 3)
            return true;
        else
            return false;
    }
};