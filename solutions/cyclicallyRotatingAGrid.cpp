class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int cols = grid[0].size();
        int rows = grid.size();
        vector<int> layer;
        int nLayers = min(rows, cols) / 2;
                    
        int test = k;
        
        for(int iLayer=0; iLayer<nLayers; iLayer++){
            k = test%(rows*2 + cols*2 - 4);  // avoid multiple rotations
            
            // Get a vector with all elements within a layer
            layer = getLayer(grid, iLayer);

            cout << "Layer: " << iLayer << "\n";
            for(int i : layer)
                cout << i << " - ";
            cout << "\n";
            
            // Reorganize layer vector according to "k"
            reorganizeVector(layer, k);
            
            for(int i : layer)
                cout << i << " - ";
            cout << "\n\n";
            
            // Update grid using vector "layer"
            updateLayer(grid, layer, iLayer);
            
            cols -= 2;
            rows -= 2;
        }
        return grid;
    }
    
private:
    vector<int> getLayer(vector<vector<int>>& grid, int iLayer){
        int cols = grid[0].size();
        int rows = grid.size();
        vector<int> layer;
        int iCol, iRow;
        for(iCol=iLayer; iCol<cols-iLayer; iCol++)
            layer.push_back(grid[iLayer][iCol]);
        for(iRow=iLayer+1; iRow<rows-1-iLayer; iRow++)
            layer.push_back(grid[iRow][cols-1-iLayer]);
        for(iCol=cols-1-iLayer; iCol>=iLayer; iCol--)
            layer.push_back(grid[rows-1-iLayer][iCol]);
        for(iRow=rows-2-iLayer; iRow>=1+iLayer; iRow--)
            layer.push_back(grid[iRow][iLayer]);
        return layer;
    }
    
    void reorganizeVector(vector<int>& layer, int k){
        for(int i=0; i<k; i++)
            layer.push_back(layer[i]);
        for(int i=0; i<k; i++)
            layer.erase(layer.begin());
    }
    
    void updateLayer(vector<vector<int>>& grid, vector<int>& layer, int iLayer){
        int cols = grid[0].size();
        int rows = grid.size();
        int iCol, iRow;
        int iVector = 0;
        for(iCol=iLayer; iCol<cols-iLayer; iCol++){
            grid[iLayer][iCol] = layer[iVector];
            iVector++;
        }
        for(iRow=iLayer+1; iRow<rows-1-iLayer; iRow++){
            grid[iRow][cols-1-iLayer] = layer[iVector];
            iVector++;
        }
        for(iCol=cols-1-iLayer; iCol>=iLayer; iCol--){
            grid[rows-1-iLayer][iCol] = layer[iVector];
            iVector++;
        }
        for(iRow=rows-2-iLayer; iRow>=1+iLayer; iRow--){
            grid[iRow][iLayer] = layer[iVector];
            iVector++;
        }
    }
};

// [[1,2,3,4], [16,1,2,5], [15,3,4,6], [14,5,6,7], [13,7,8,8], [12,11,10,9]]