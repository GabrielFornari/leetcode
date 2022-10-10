class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i;
        if(arr.size() < 3)
            return false;
        
        i=1;
        while(i<arr.size() && arr[i] > arr[i-1])
            i++;
        if(i == arr.size() || i == 1)
            return false;
        while(i<arr.size() && arr[i] < arr[i-1])
            i++;
        if(i == arr.size())
            return true;
        else
            return false;
    }
};