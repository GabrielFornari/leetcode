class Solution {
private:
    vector<vector<int>> img;
    int nLines, nCols;
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        img = image;
        nLines = image.size();
        nCols = image[0].size();
        
        recursiveFlood(sr, sc, color, image[sr][sc]);
        return img;
    }
    
    void recursiveFlood(int line, int col, int newColor, int oldColor){
        
        img[line][col] = newColor;
        
        if(line-1 >= 0 && img[line-1][col] != newColor && img[line-1][col] == oldColor)
            recursiveFlood(line-1, col, newColor, oldColor);
        if(line+1 < nLines && img[line+1][col] != newColor && img[line+1][col] == oldColor)
            recursiveFlood(line+1, col, newColor, oldColor);
        if(col-1 >= 0 && img[line][col-1] != newColor && img[line][col-1] == oldColor)
            recursiveFlood(line, col-1, newColor, oldColor);
        if(col+1 < nCols && img[line][col+1] != newColor && img[line][col+1] == oldColor)
            recursiveFlood(line, col+1, newColor, oldColor);
    }
};