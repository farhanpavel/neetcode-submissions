class Solution {
public:
    bool bfs(vector<vector<char>>& copyBoard,vector<vector<int>>& visited,pair<int,int>p){
    int row = p.first;
    int col = p.second;
    queue<pair<int,int>>q;
    q.push({row,col});
    visited[row][col]=1;
    while(!q.empty()){
    int firstRow = q.front().first;
    int firstCol = q.front().second;
   if((firstRow == 0 || firstCol == 0 || firstRow == copyBoard.size()-1 || firstCol == copyBoard[0].size()-1) && (copyBoard[firstRow][firstCol]=='O'))
    {
    return true;   
    }
    q.pop();
    int delRow[]={-1,1,0,0};
    int delCol[]={0,0,-1,1};
    for(int i=0;i<4;i++){
    int newRow = delRow[i] + firstRow ;
    int newCol = delCol[i] + firstCol ;
    if(newRow>=0 && newCol>=0 && newRow<copyBoard.size() && newCol <copyBoard[0].size() && visited[newRow][newCol]==-1){
    visited[newRow][newCol]=1;
    if((newRow == 0 || newCol == 0 || newRow == copyBoard.size()-1 || newCol == copyBoard[0].size()-1) && (copyBoard[newRow][newCol]=='O'))
    {
    return true;   
    }
    else if(copyBoard[newRow][newCol]=='O'){
    q.push({newRow,newCol});     
    }
    }
    }
    }    
    return false;   
    }
    void solve(vector<vector<char>>& board) {
    int n=board.size();
    int m=board[0].size();
    vector<vector<char>>copyBoard = board;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(copyBoard[i][j]=='O'){
         vector<vector<int>>visited(n,vector<int>(m,-1));

        if(!bfs(copyBoard,visited,{i,j})){
        copyBoard[i][j]='X';    
        } 
        }
        
        }
    }
   
    board=copyBoard;
    }
};
