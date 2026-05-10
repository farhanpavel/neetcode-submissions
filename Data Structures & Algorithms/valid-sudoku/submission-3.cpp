class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        unordered_map<char, int> col, row, box;
        for (int i = 0; i < n; i++) {
            col.clear();
            row.clear();
            for (int j = 0; j < m; j++) {
                int gridCheck = (i / 3) * 3 + j / 3;
                
                if ((board[i][j] != '.' && col.find(board[i][j]) != col.end()) ||
                   (board[j][i]!='.' && row.find(board[j][i]) != row.end()) ||
                    ((board[i][j]!='.' &&box.find(board[i][j]) != box.end() && box[board[i][j]] == gridCheck))) {
                    return false;
                } else  {
                    if(board[i][j]!='.'){
                      col[board[i][j]]++;
                      box[board[i][j]] = gridCheck;  
                    }
                    if(board[j][i]!='.'){
                      row[board[j][i]]++;

                    }
                  
                }
            }
        }
        return true;
    }
};
