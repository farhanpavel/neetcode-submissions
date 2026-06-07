class Solution {
public:
    int dfs(vector<vector<int>>& matrix,int idx1 ,int idx2,vector<vector<int>>& visited){
    if(idx1<0 || idx2<0 || idx1>=matrix.size() || idx2>=matrix[0].size()){
    return 0;    
    }
    if(visited[idx1][idx2]!=-1) return visited[idx1][idx2];
    int delRow[]={-1,1,0,0};
    int delCol[]={0,0,-1,1};
    int store = 1;
    for(int i=0;i<4;i++){
    int newRow = delRow[i] + idx1;
    int newCol = delCol[i] + idx2;
    if(newRow>=0 && newCol>=0 && newRow<matrix.size() && newCol<matrix[0].size() &&  matrix[idx1][idx2]<matrix[newRow][newCol]){
    store = max(store,1+dfs(matrix,newRow,newCol,visited));        
   
    }   
    }
    
    return visited[idx1][idx2]=store;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
     int n = matrix.size();
     int m = matrix[0].size();
     int ans = INT_MIN;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        vector<vector<int>>visited(n,vector<int>(m,-1));   
        int data =  dfs(matrix,i,j,visited);   
        ans = max(data,ans);
        }
     }
    return ans;

    }
};
