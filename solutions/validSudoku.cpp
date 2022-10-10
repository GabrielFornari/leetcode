class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> hashSet;
        
        for(int iLine=0; iLine<9; iLine++){
            for(int iCol=0; iCol<9; iCol++){
                if(board[iLine][iCol] != '.'){
                    if(hashSet.count(board[iLine][iCol]) > 0)
                        return false;
                    else
                        hashSet.insert(board[iLine][iCol]);
                }
            }
            hashSet.clear();
        }
        for(int iCol=0; iCol<9; iCol++){
            for(int iLine=0; iLine<9; iLine++){
                if(board[iLine][iCol] != '.'){
                    if(hashSet.count(board[iLine][iCol]) > 0)
                        return false;
                    else
                        hashSet.insert(board[iLine][iCol]);
                }
            }
            hashSet.clear();
        }
        for(int boxLine=0; boxLine<9; boxLine+=3){
            for(int boxCol=0; boxCol<9; boxCol+=3){
                for(int iLine=boxLine; iLine<boxLine+3; iLine++){
                    for(int iCol=boxCol; iCol<boxCol+3; iCol++){
                        if(board[iLine][iCol] != '.'){
                            if(hashSet.count(board[iLine][iCol]) > 0)
                                return false;
                            else
                                hashSet.insert(board[iLine][iCol]);
                        }
                    }
                }
                hashSet.clear();
            }
        }
        return true;
    }
};