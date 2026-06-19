class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            map<char, int> row;
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') continue;
                if (row.find(board[i][j]) != row.end()) {
                    return false;
                } else {
                    row[board[i][j]]++;
                }
            }
        }
        for (int i = 0; i < board.size(); i++) {
            map<char, int> col;
            for (int j = 0; j < board[0].size(); j++) {
                if (board[j][i] == '.') continue;
                if (col.find(board[j][i]) != col.end()) {
                    return false;
                } else {
                    col[board[j][i]]++;
                }
            }
        }
        for (int i = 0; i < 9; i++) {
            map<char, int> grid;
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    int newRow = (i / 3) * 3 + j;
                    int newCol = (i % 3) * 3 + k;
                    if (board[newRow][newCol] == '.') continue;
                    if (grid.find(board[newRow][newCol]) != grid.end()) {
                        return false;
                    } else {
                        grid[board[newRow][newCol]]++;
                    }
                }
            }
        }
        return true;
    }
};
