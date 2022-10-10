class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
       if(matrix.empty()) return {};
        
        const int N = matrix.size();
        const int M = matrix[0].size();
        
        vector<int> res;
        for(int s = 0; s <= N + M - 2; ++s)
        {
            // for all i + j = s
            for(int x = 0; x <= s; ++x) 
            {
                int i = x;
                int j = s - i;
                if(s % 2 == 0) swap(i, j);

                if(i >= N || j >= M) continue;
                
                res.push_back(matrix[i][j]);
            }
        }
        
        return res;
    }
    
    void printIdx(vector<vector<int>> &mat){
        int iLine, iCol, lastEven;
        for(iLine=0; iLine<mat.size(); iLine++)
            for(iCol=0; iCol<=iLine && iCol<mat[0].size(); iCol++)
                if(iLine%2 == 0)
                    cout << iLine-iCol << "," << iCol << " | ";
                else
                    cout << iCol << "," << iLine-iCol << " | ";
        
        lastEven = iLine;
        cout << endl;
        for(iCol=1; iCol<mat[0].size(); iCol++){
            for(iLine=0; iLine<mat.size() && iCol+iLine<mat[0].size(); iLine++){
                if(lastEven%2 == 0)
                    cout << "+" << mat.size()-1-iLine << "," << iCol+iLine << " | ";
                else{
                    if(mat.size() > mat[0].size())
                        cout << mat.size()-1 << "," << mat[0].size()-1 << " | ";
                    else{
                        if(mat.size() == mat[0].size())
                            cout << iCol+iLine << "," << mat[0].size()-1-iLine << " | ";
                        else
                            if(iCol+1 == mat[0].size())
                                cout << mat.size()-1 << "," << mat[0].size()-1 << " | ";
                            else
                                cout << iLine << "," << iCol-iLine+1 << " | ";
                    }
                }
            }
            lastEven++;
        }
    }
};