class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue<int> toVisit;
        set<int> visited;
        int nIslands = 0;
        int nLines = grid.size();
        int nCols = grid[0].size();
        for(int i=0; i<nLines*nCols; i++){
            if((visited.count(i) == 0) && (grid[i/nCols][i%nCols] == '1')){
                toVisit.push(i);
                nIslands++;
                while(!toVisit.empty()){
                    int currentIdx = toVisit.front();
                    toVisit.pop();
                    if(visited.count(currentIdx) == 0){
                        visited.insert(currentIdx);
                        int iLine = currentIdx/nCols;
                        int iCol = currentIdx%nCols;
                        // Insert adjacent tiles
                        if(iLine > 0 && grid[iLine-1][iCol] == '1')
                            toVisit.push((iLine-1)*nCols + iCol);
                        if(iLine < nLines-1 && grid[iLine+1][iCol] == '1')
                            toVisit.push((iLine+1)*nCols + iCol);
                        if(iCol > 0 && grid[iLine][iCol-1] == '1')
                            toVisit.push(currentIdx-1);
                        if(iCol < nCols-1 && grid[iLine][iCol+1] == '1')
                            toVisit.push(currentIdx+1);
                    }
                }
            }
            //cout << i/nCols << " - " << i%nCols << endl;
        }
        return nIslands;
    }
};
