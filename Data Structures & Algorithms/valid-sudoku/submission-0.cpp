class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_set<char> seenRows;
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                if(seenRows.count(board[i][j]))
                    return false;
                seenRows.insert(board[i][j]);
            }
        }
          for(int i = 0; i < 9; i++){
            unordered_set<char> seenCols;
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.'){
                    continue;
                }
                if(seenCols.count(board[j][i]))
                    return false;
                seenCols.insert(board[j][i]);
            }
        }
        vector<unordered_set<char>> seenBoxes(9);
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.')
                    continue;
                int cutie = (i/3)*3 + j/3;
                if(seenBoxes[cutie].count(board[i][j]))
                    return false;
                seenBoxes[cutie].insert(board[i][j]);
            }
        }
        return true;
    }
};
