class Solution {
public:
    int maximum69Number (int num) {
        int out = num;
        int lastPos = -1;
        int pos = 0;
        while(num > 0){
            if(num%10 == 6)
                lastPos = pos;
            num /= 10;
            pos++;
        }
        if(lastPos == -1)
            return out;
        else
            return out+(pow(10, lastPos)*3);
    }
};