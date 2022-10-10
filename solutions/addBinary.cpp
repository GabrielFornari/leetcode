class Solution {
public:
    string addBinary(string a, string b) {
        int i, j, carryOne = 0;
        string tmp;
        
        if(b.size() > a.size()){
            tmp = b;
            b = a;
            a = tmp;
        }
        for(i=a.size()-1, j=b.size()-1; i>=0 && j>=0; i--, j--){
            if(a[i] != b[j]){
                if(carryOne){
                    a[i] = '0';    
                }
                else{
                    a[i] = '1';
                    carryOne = 0;
                }
            }
            else{
                if(carryOne){
                    if(a[i] != "1"[0])
                        carryOne = 0;
                    a[i] = '1';
                }
                else{
                    if(a[i] == "1"[0])
                        carryOne = 1;
                    a[i] = '0';
                }
            }
        }
        while(i>=0 && carryOne){
            if(a[i] == "1"[0]){
                a[i] = '0';
            }
            else{
                a[i] = '1';
                carryOne--;
            }
            i--;
        }
        if(carryOne){
            a.insert (0, 1, '1');
        }
        return a;
    }
};