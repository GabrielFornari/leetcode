class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int tail=0, head=1, totalMin=nums.size()+1, total=nums[0];
        
        while(head<nums.size()){
            if(total >= target){
                totalMin = min(totalMin, head-tail);
                
                //cout << "found: " << tail << ", " << head << endl;
            }
            if(tail == head || total < target){
                total += nums[head];
                head++;
            }
            else{
                total -= nums[tail];
                tail++;
            }
            //cout << "t: " << tail << " h: " << head << endl;
        }
        while(tail<nums.size()){
            if(total >= target){
                totalMin = min(totalMin, head-tail);
                //cout << "found: " << tail << ", " << head << endl;
            }
            total -= nums[tail];
            tail++;
            
            //cout << "t: " << tail << " h: " << head << endl;
        }
        if(totalMin < nums.size()+1)
            return totalMin;
        else
            return 0;
    }
};