class Solution {
public:
    vector<string>ans;
    void backtrack(string arr , int open,int close,int n){
    vector<char>choice={'(',')'};
    
    if(open+close==n*2){
    ans.push_back(arr);
    return;    
    }
    
    for(char x:choice){
    if(x=='(' && open<n){
    arr+=x; 
    backtrack(arr,open+1,close,n);
    arr.pop_back();
    }
    else if(x==')' && close<open  ){
    arr+=x; 
    backtrack(arr,open,close+1,n);
    arr.pop_back();
    }
    }
    
    }

    


    vector<string> generateParenthesis(int n) {
    int open=0,close=0;
    string arr="";
    backtrack(arr,open,close,n);    
    return ans;
    }
};
