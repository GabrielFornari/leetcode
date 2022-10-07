class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashMap;
        vector<int> out;
        vector<pair<int, int>> mostFrequent;
        
        for(int num : nums)
            hashMap[num]++;
        
        copy(hashMap.begin(), hashMap.end(), back_inserter<vector<pair<int, int>>>(mostFrequent));
        sort(mostFrequent.begin(), mostFrequent.end(),
            [](const pair<int, int> &l, const pair<int, int> &r)
            {
                if (l.second != r.second)
                    return l.second > r.second;
                return l.first > r.first;
            });
        
        
        for(int i=0; i<k; i++){
            out.push_back(mostFrequent[i].first);
            //cout << mostFrequent[i].first << " - " << mostFrequent[i].second << endl;
        }
        
        return out;
    }
};