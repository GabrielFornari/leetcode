class Solution {
public:
    void duplicateZeros(vector<int>& arr) {    
        vector<int>::iterator it;
        for(it = arr.begin(); it < arr.end(); it++){
            cout << *it << " - ";
            if(*it == 0){
                it = arr.insert(it, 0);
                it++;
                arr.erase(arr.end()-1);
            }
        }
        
    }
};