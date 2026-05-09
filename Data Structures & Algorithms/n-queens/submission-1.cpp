class Solution {
public:
    vector<vector<string>>ans;
    bool checkPlace(int row,int col,int n,vector<string>&arr){
    for(int i=0;i<n;i++){
    if(arr[i][col]=='Q'){
    return false;    
    }    
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
    if(arr[i][j]=='Q'){
    return false;    
    }    
    }
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
    if(arr[i][j]=='Q'){
    return false;    
    }    
    }
    return true;    
    }
   
   
    void queenCheck(int n,int row,vector<string>&arr){
    if(row==n){
    ans.push_back(arr);
    return;    
    }    
    for(int i=0;i<n;i++){
    if(checkPlace(row,i,n,arr)){
    arr[row][i]='Q';
    queenCheck(n,row+1,arr);
    arr[row][i]='.';
    }    
    }
    }

    vector<vector<string>> solveNQueens(int n) {
    int row=0;
    vector<string>arr(n,string(n,'.'));
    queenCheck(n,row,arr);
    return ans;    
    }
};
