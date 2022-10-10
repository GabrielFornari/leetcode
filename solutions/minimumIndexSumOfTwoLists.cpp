class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> restMap;
        vector<string> aux;
        vector<string> out;
        int restIdx = 0;
        int min = list1.size()+list2.size();
        for(string rest : list1){
            restMap.insert(pair<string, int>(rest, restIdx));
            restIdx++;
        }
        
        restIdx = 0;
        for(string rest : list2){
            auto it = restMap.find(rest); 
            if(it != restMap.end()){
                it->second += restIdx;
                aux.push_back(it->first);
                if(min > it->second)
                    min = it->second;
            }
            restIdx++;
        }
        
        for(string rest : aux)
            if(restMap[rest] <= min)
                out.push_back(rest);
        
        return out;
    }
};