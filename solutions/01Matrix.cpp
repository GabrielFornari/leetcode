class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int, int>> todo;
        int m=mat.size(), n=mat[0].size(), step=1;
        pair<int, int> idx;
        vector<vector<int>> dist(m, vector<int>(n));
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(mat[i][j] == 0)
                    todo.push(make_pair(i, j));
                else
                    dist[i][j] = -1;
        
        while(!todo.empty()){
            int todoSize = todo.size();
            for(int i=0; i<todoSize; i++) {
                idx = todo.front();
                todo.pop();
                
                if(idx.first-1 >= 0 && dist[idx.first-1][idx.second] < 0){
                    dist[idx.first-1][idx.second] = step;
                    todo.push(make_pair(idx.first-1, idx.second));
                } if(idx.first+1 < m && dist[idx.first+1][idx.second] < 0){
                    dist[idx.first+1][idx.second] = step;
                    todo.push(make_pair(idx.first+1, idx.second));
                } if(idx.second-1 >= 0 && dist[idx.first][idx.second-1] < 0){
                    dist[idx.first][idx.second-1] = step;
                    todo.push(make_pair(idx.first, idx.second-1));
                } if(idx.second+1 < n && dist[idx.first][idx.second+1] < 0){
                    dist[idx.first][idx.second+1] = step;
                    todo.push(make_pair(idx.first, idx.second+1));
                }
            }
            step++;
        }
        return dist;
    }
};