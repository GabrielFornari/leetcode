class Solution {
public:
    int numberOfSteps(int num) {
        if(num == 0)
            return 0;
        
        string binaryNum = bitset<32>(num).to_string();
        
        size_t mostRelevantBit = 31-binaryNum.find_first_of("1"); // First 1 that appears
        int nonZeroBits = count(binaryNum.begin(), binaryNum.end(), '1'); // Count number of 1's
        
        // DEBUG
        // cout << mostRelevantBit << "\n";
        // cout << nonZeroBits << "\n";
        
        return mostRelevantBit+nonZeroBits;
    }
};