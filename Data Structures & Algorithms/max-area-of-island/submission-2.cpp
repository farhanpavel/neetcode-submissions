class Solution {
public:
    int count=0;
    int ans = 0;
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& visited,pair<int,int>p){
    int row = p.first;
    int col = p.second;
    if(row>=0 && col>=0 && row<grid.size() && col<grid[0].size() && visited[row][col]!=1 && grid[row][col]==1){
    count++;
    ans=max(ans,count);
    visited[row][col]=1;
    dfs(grid,visited,{row+1,col});
    dfs(grid,visited,{row-1,col});
    dfs(grid,visited,{row,col+1});
    dfs(grid,visited,{row,col-1});
    
    }
     
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>>visited(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(visited[i][j]!=1 && grid[i][j]==1){
        dfs(grid,visited,{i,j}); 
         count=0;   
        }    
        }
    }
    return ans;   
    }
};
