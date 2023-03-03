class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int mid, left=0, right=0;
        for(int n : nums){
            left = max(left, n);
            right += n;
        }
        while(left <= right){
            mid = (left + right) / 2;
            int count = 1, sum = 0;
            for(int n : nums){
                sum += n;
                if(sum > mid){
                    count++;
                    sum = n;
                }
            }
            if(count <= k)
                right = mid-1;
            else
                left = mid+1;
        }
        return max(right, left);
    }
};