class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>matrix2(n,vector<int>(m,0));
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            matrix2[row][col]=matrix[n-col-1][row];
        }
    }
    matrix=matrix2;   
    }
};
