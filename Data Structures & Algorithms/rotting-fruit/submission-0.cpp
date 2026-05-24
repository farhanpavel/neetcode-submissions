class Solution {
public:
int count=0;
    void bfs(vector<vector<int>>& grid,queue<pair<int,int>>&q,int one)
    {
     int row = q.front().first;
     int col = q.front().second;
     bool flag=false;
     while(!q.empty() && one>0){
     int k=q.size();
     while(k--)
     {int adjRow=q.front().first;
     int adjCol=q.front().second;
     q.pop();
     for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(i!=0 && j!=0) continue;
            if(i==0 && j==0) continue;
            
            int newRow=adjRow+i;
            int newCol=adjCol+j;
            if(newRow>=0 && newCol>=0 && newRow<grid.size() && newCol<grid[0].size() && grid[newRow][newCol]==1){   
            one--;
            grid[newRow][newCol]=2;   
            q.push({newRow,newCol}) ;
            }
            
        }
     }
     }
     count++;  
     } 
     if(one!=0)count=-1;
     
    }
    int orangesRotting(vector<vector<int>>& grid) {
    int row = grid.size();
    int col = grid[0].size();
    queue<pair<int,int>>q;
    int one=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         if(grid[i][j]==2){
         q.push({i,j});   
         } 
         if(grid[i][j]==1){
            one++;
         }  
        }
    }
    bfs(grid,q,one);
    return count;    
    }
};