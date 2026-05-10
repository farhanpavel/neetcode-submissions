class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        unordered_map<char, int> col, row, box;
       for(int i=0;i<n;i++){
        row.clear();
        for(int j=0;j<m;j++){
         if(board[i][j]=='.') continue;
         if(row.count(board[i][j])){
         return false; 
         }
         row[board[i][j]]++;

        }
       }
       for(int i=0;i<n;i++){
        col.clear();
        for(int j=0;j<m;j++){
         if(board[j][i]=='.') continue;
         if(col.count(board[j][i])){
         return false; 
         }
         row[board[j][i]]++;
        }
       }
       for(int i=0;i<n;i++){
        col.clear();
        for(int j=0;j<m;j++){
         if(board[j][i]=='.') continue;
         if(col.count(board[j][i])){
         return false; 
         }
         col[board[j][i]]++;
        }
       }
     for(int grid=0; grid<9; grid++) {
   box.clear();
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            char c = board[(grid/3)*3 + i][(grid%3)*3 + j];
            if(c == '.') continue;
            if(box.count(c)) return false;
            box[c]++;
        }
    }
}
     

        return true;
    }
};
