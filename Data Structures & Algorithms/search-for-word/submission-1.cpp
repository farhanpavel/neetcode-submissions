class Solution {
public:
    int m,n;
    bool find(int row,int col,int inc,vector<vector<char>>& board,string word){
    if(inc==word.size()){
     return true;   
    }
    if(row<0 || col<0 || row>=m || col>=n || board[row][col]=='#'){
     return false;   
    }    
    if(board[row][col] != word[inc]){
    return false;    
    }
    char temp=board[row][col];
    board[row][col]='#';
    bool ans= find(row+1,col,inc+1,board,word) ||
    find(row-1,col,inc+1,board,word) ||
    find(row,col+1,inc+1,board,word) ||
    find(row,col-1,inc+1,board,word);
    board[row][col]=temp;
    return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {
     m=board.size();
     n=board[0].size();
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
         if(board[row][col]==word[0] && find(row,col,0,board,word)){
          return true;  
         }   
        }
    }
    return false;    
    }
};
