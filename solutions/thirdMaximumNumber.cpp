class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long int max1, max2, max3, count = 0;
        max1 = max2 = max3 = pow(-2, 33);
        for(int i=0; i<nums.size(); i++){
            if(max3 < nums[i] && nums[i] != max1 && nums[i] != max2){
                if(max2 < nums[i]){
                    if(max1 < nums[i]){
                        max3 = max2;
                        max2 = max1;
                        max1 = nums[i];
                        count++;
                    }
                    else{
                        max3 = max2;
                        max2 = nums[i];
                        count++;
                    }
                }
                else{
                    max3 = nums[i];
                    count++;
                }
            }
        }
        cout << max1 << " - " << max2 << " - " << max3 << " :: " << count << "\n";
        if(count >= 3)
            return max3;
        else
            return max1;
    }
};