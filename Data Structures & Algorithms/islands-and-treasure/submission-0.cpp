class Solution {
public:

    void  bfs(vector<vector<int>>& grid,queue<pair<pair<int,int>,int>>&q){
    int row =q.front().first.first;
    int col =q.front().first.second;

    while(!q.empty()){
    int adjRow= q.front().first.first;
    int adjCol= q.front().first.second;
    int dist=q.front().second;
    q.pop();
    for(int i=-1 ; i<=1 ;i++){
      for(int j=-1 ; j<=1 ; j++){
       if(i!=0 && j!=0) continue; 
       if(i==0 && j==0) continue;
       int newRow = adjRow + i ;
       int newCol = adjCol + j ;
       if(newRow>=0 && newCol>=0 && newRow<grid.size() && newCol<grid[0].size() && grid[newRow][newCol]==2147483647){
       grid[newRow][newCol]=dist+1;
       q.push({{newRow,newCol},dist+1});
       }
      
      }  
    }
    }   
    }
    
    void islandsAndTreasure(vector<vector<int>>& grid) {
    int n= grid.size();
    int m= grid[0].size();
    queue<pair<pair<int,int>,int>>q;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m ;j++){
        if(grid[i][j]==0){
         q.push({{i,j},0});  
        }    
        }
    }
    bfs(grid,q);



    }
};
