class Solution {
   public:
    bool dfs(vector<vector<char>>& copyBoard,vector<vector<int>>& visited,pair<int,int>p)
    {
     int row = p.first;
     int col = p.second;
     int n = copyBoard.size();
     int m = copyBoard[0].size();
     if(row==0 || col ==0 || row==n-1 || col==m-1){
     if(copyBoard[row][col]=='O'){
     return false;   
     }   
     } 
     visited[row][col]=1;
     int delRow[]={-1,1,0,0};
     int delCol[]={0,0,-1,1};
     bool store = true;
     for(int i=0;i<4;i++){
        int newRow = delRow[i]+row;
        int newCol = delCol[i]+col;
        if(newCol>=0 && newRow >=0 && newRow<copyBoard.size() && newCol < copyBoard[0].size() && copyBoard[newRow][newCol]=='O' && visited[newRow][newCol]==-1){
        store = dfs(copyBoard,visited,{newRow,newCol});   
        if(store==false) 
        {
        visited[row][col]=-1;
        return false;
        }
        }
        
     }   
    visited[row][col]=-1; 
    return store;
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<char>>copyBoard=board;
        vector<vector<int>>visited(n,vector<int>(m,-1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O' && visited[i][j]==-1) {
                if( dfs(copyBoard,visited,{i,j})){
                copyBoard[i][j]='X';    
                }    
                }
            }
        }
      board=copyBoard;
    }
};
