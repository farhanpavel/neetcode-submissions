class Solution {
   public:
    void bfs(vector<vector<char>>&grid,vector<vector<int>>&visited, pair<int,int>p) {
    queue<pair<int,int>>q;
    q.push({p.first,p.second});
    visited[p.first][p.second]=1;
    while(!q.empty()){
    int row = q.front().first;
    int col = q.front().second;
    q.pop();
    for(int delrow=-1;delrow<=1;delrow++){
    for(int delcol=-1;delcol<=1;delcol++){
    if(delrow != 0 && delcol != 0) continue;
    int changeRow= row + delrow;    
    int changeCol= col + delcol;    
    if(changeRow>=0 && changeCol>=0 && changeRow<grid.size() && changeCol<grid[0].size() 
    && visited[changeRow][changeCol]!=1 && grid[changeRow][changeCol]=='1'){
    visited[changeRow][changeCol]=1;
    q.push({changeRow,changeCol});    
    }
    }    
    }
    }   
        
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
      
        int count = 0;

        vector<vector<int>> visited(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] != 1 && grid[i][j]=='1') {
                count++;
                bfs(grid,visited,{i,j});    
                }
            }
        }
        return count;
    }
};