class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> rooms2visit;
        set<int> visited;
        int nRooms = rooms.size();
        
        rooms2visit.push(0);
        while(!rooms2visit.empty()){
            int curRoom = rooms2visit.top();
            visited.insert(curRoom);
            
            if(visited.size() == nRooms)
                return true;
            
            rooms2visit.pop();
            for(int key : rooms[curRoom])
                if(visited.count(key) == 0)
                    rooms2visit.push(key);
        }
        return false;
    }
};