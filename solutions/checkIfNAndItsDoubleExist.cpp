class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> inputNums;
        unordered_map<int, int>::iterator it;
        //for(int i=0; i<arr.size(); i++)
        //    inputNums.insert({arr[i], i});
        
        for(int i=0; i<arr.size(); i++){
            it = inputNums.find(arr[i]*2);
            if(it != inputNums.end() && it->second != i)
                return true;
            it = inputNums.find(arr[i]/2);
            if(arr[i] % 2 == 0 && it != inputNums.end() && it->second != i)
                return true;
            
            inputNums.insert({arr[i], i});
        }
        return false;
    }
};