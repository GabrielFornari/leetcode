class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> idx;
        int i=0, j=numbers.size()-1;
        while(numbers[i]+numbers[j] != target){
            if(numbers[i]+numbers[j] < target)
                i++;
            else
                j--;
        }
        idx.push_back(++i);
        idx.push_back(++j);
        return idx;
    }
};