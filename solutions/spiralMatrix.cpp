class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;
        int i, m = matrix.size(), n = matrix[0].size();
        int nLayers = min(m,n)/2;
        
        for(int layer=0; layer<nLayers; layer++){
            for(i=layer; i<n-layer; i++)
                spiral.push_back(matrix[layer][i]);
            for(i=layer+1; i<m-1-layer; i++)
                spiral.push_back(matrix[i][n-1-layer]);
            for(i=n-1-layer; i>=layer; i--)
                spiral.push_back(matrix[m-1-layer][i]);
            for(i=m-2-layer; i>layer; i--)
                spiral.push_back(matrix[i][layer]);
        }
        if(min(m,n)%2){
            if(m > n)
                for(i=nLayers; i<m-nLayers; i++)
                    spiral.push_back(matrix[i][nLayers]);
            else
                for(i=nLayers; i<n-nLayers; i++)
                    spiral.push_back(matrix[nLayers][i]);
        }
        return spiral;
    }
};