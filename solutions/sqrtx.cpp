class Solution {
public:
    int mySqrt(int x) {
        unsigned long int left=0, right=x, mid;
        
        while(left <= right){
            mid = left + (right-left)/2; // avoid overflow
            if(mid*mid == x)
                return mid;
            if(mid*mid > x)
                right = mid-1;
            if(mid*mid < x)
                left = mid+1;
        }
        if(mid*mid > x)
            mid--;
        return mid;
    }
};