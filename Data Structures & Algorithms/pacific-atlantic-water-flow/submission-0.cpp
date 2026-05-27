class Solution {
public:

    bool dfs(vector<vector<int>>& heights,vector<vector<int>>&visited,pair<int,int>p){
    int row = p.first;
    int col = p.second;
    if(row == heights.size()-1 || col == heights[0].size()-1){
    return true;    
    }    
    int delRow [] = {-1,1,0,0};
    int delCol [] = {0,0,-1,1};    
    visited[row][col]=1;
    bool store = false;
    for(int i=0;i<4;i++){
    int newRow = delRow[i]+row;
    int newCol = delCol[i]+col;
    if(newRow>=0 && newCol>=0 && newRow<heights.size() && newCol<heights[0].size() && visited[newRow][newCol]==-1 &&  heights[row][col]>= heights[newRow][newCol]){
    store = dfs(heights,visited,{newRow,newCol});   
    if(store == true) return true;
    }
    }
    return store;
    }
    bool dfs2(vector<vector<int>>& heights,vector<vector<int>>&visited2,pair<int,int>p){
    int row = p.first;
    int col = p.second;
    if(row == 0 || col == 0){
    return true;    
    }    
    int delRow [] = {-1,1,0,0};
    int delCol [] = {0,0,-1,1};    
    visited2[row][col]=1;
    bool store = false;
    for(int i=0;i<4;i++){
    int newRow = delRow[i]+row;
    int newCol = delCol[i]+col;
    if(newRow>=0 && newCol>=0 && newRow<heights.size() && newCol<heights[0].size() && visited2[newRow][newCol]==-1 && heights[row][col]>= heights[newRow][newCol]){
    store = dfs2(heights,visited2,{newRow,newCol});   
    if(store == true) return true;
    }
    }
    return store;
    }


    vector<vector<int>>  
    pacificAtlantic(vector<vector<int>>& heights) {
   int n = heights.size();
   int m = heights[0].size();
   vector<vector<bool>>ans(n,vector<bool>(m,false));

    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ; j++){
         
          vector<vector<int>>visited(n,vector<int>(m,-1));

          bool temp = dfs(heights,visited,{i,j}); 
          ans[i][j]=temp; 
            
        }
    }
   vector<vector<bool>>ans2(n,vector<bool>(m,false));

     for(int i=n-1 ; i>=0 ;i--){
        for(int j=m-1 ; j>=0 ; j--){
         
        vector<vector<int>>visited2(n,vector<int>(m,-1));
          bool temp = dfs2(heights,visited2,{i,j}); 
          ans2[i][j]=temp; 
            
        }
    }
    vector<vector<int>>occean;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans2[i][j]<<" ";
            if(ans[i][j]==true && ans2[i][j]==true){
             occean.push_back({i,j});   
            }
        }
        cout<<endl;
    }
    return occean;


    }
};
