class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     
      for(int i=0;i<board.size(); i++){
          map<int,int>mp1; 
        for(int j=0;j<board.size();j++){
          if(board[i][j]=='.') continue;
          int x = board[i][j]-'0';
          mp1[x]++; 
          if(mp1[x]>1){
            return false;
          }  
        }
      
      }  
    for(int i=0;i<board.size(); i++){
          map<int,int>mp2; 
        for(int j=0;j<board.size();j++){
         if(board[j][i]=='.') continue;  
         int x = board[j][i]-'0';
        
          mp2[x]++;  
          if(mp2[x]>1){
            return false;
          }  
        }
      
      }
      for (int square = 0; square < 9; square++) {
          map<int,int>mp3; 
            for (int i = 0; i < 3; i++) {

                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                      int x = board[row][col]-'0';
        
                    mp3[x]++;
                 if(mp3[x]>1){
                 return false;
          } 
                }
            }
           
        }
    return true;
    }
};
