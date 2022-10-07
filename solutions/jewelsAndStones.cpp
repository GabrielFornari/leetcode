class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> hashSet;
        int total = 0;
        
        for(char a : jewels)
            hashSet.insert(a);
        
        for(char a : stones)
            if(hashSet.count(a) > 0)
                total++;
        
        return total;
    }
};