class Solution {
public:
    int dp(string s,string t,int i,int j,vector<vector<int>>&arr){
    if(i==s.size() && j==t.size()){
    return 1;   
    }
    if(i>s.size() || j>t.size()){
    return 0;    
    }    
    if(arr[i][j]!=-1) return arr[i][j];
    int ans=0;
    if(s[i]==t[j]){
    ans = dp(s,t,i+1,j,arr) + dp(s,t,i+1,j+1,arr);      
    }
    else{
    ans = dp(s,t,i+1,j,arr);    
    }
    return arr[i][j]=ans;
    }


    int numDistinct(string s, string t) {
    int i=0,j=0;
    vector<vector<int>>arr(s.size()+1,vector<int>(t.size()+1,-1));
    return dp(s,t,i,j,arr);    
    }
};
