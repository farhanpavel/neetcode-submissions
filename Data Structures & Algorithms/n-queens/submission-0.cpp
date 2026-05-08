class Solution {
   public:
    vector<vector<string>>ans;
    set<int>diag,antidiag,col;
    void backtrack(int n, vector<string>& arr, int row) {
        if(row==n){
         ans.push_back(arr);   
         return;   
        }    
        for (int i = 0; i < n; i++) {
        if(diag.find(row-i)==diag.end() && antidiag.find(row+i)==antidiag.end() && col.find(i)==col.end()){
        arr[row][i]='Q';
        diag.insert(row-i);
        antidiag.insert(row+i);
        col.insert(i);
        backtrack(n,arr,row+1);
        arr[row][i]='.';
        diag.erase(row-i);
        antidiag.erase(row+i);
        col.erase(i);
        }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
    vector<string> arr(n, string(n, '.'));       
    int idx = 0;
        backtrack(n, arr,idx);
        return ans;
    }
};
