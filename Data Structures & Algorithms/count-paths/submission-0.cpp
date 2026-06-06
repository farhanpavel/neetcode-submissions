class Solution {
public:
    int dp(int m , int n , int i ,int j,vector<vector<int>>&arr){
    if(i==m-1 && j==n-1){
    return 1;    
    }
    if(i>=m || j>=n){
    return 0;    
    }    
    if(arr[i][j]!=-1) return arr[i][j];
    return arr[i][j] =  dp(m,n,i+1,j,arr) +  dp(m,n,i,j+1,arr);
    }
    int uniquePaths(int m, int n) {
    int i=0,j=0; 
    vector<vector<int>>arr(m,vector<int>(n,-1));
    return dp(m,n,i,j,arr);   
    }
};