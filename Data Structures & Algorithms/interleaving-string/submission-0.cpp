class Solution {
public:
    bool dp(string s1,string s2,string s3,int i,int j,int k,vector<vector<int>>&arr){
    if(i==s1.size() && j==s2.size() && k==s3.size()){
    return true;    
    }
    
    if(i<s1.size() && j<s2.size() && k<s3.size() && s1[i]!=s3[k] && s2[j]!=s3[k]){
    return false;    
    }
    if(arr[i][j]!=-1) return arr[i][j];
    bool ans = false;
    
    if(i<s1.size() && j<s2.size() && k<s3.size() && s1[i] == s3[k] && s2[j] == s3[k]){
     ans = dp(s1,s2,s3,i+1,j,k+1,arr) || dp(s1,s2,s3,i,j+1,k+1,arr);    
    }else if(j<s2.size() && k<s3.size() && s2[j] == s3[k]){
     ans =  dp(s1,s2,s3,i,j+1,k+1,arr);
    }    
    else if(i<s1.size() && k<s3.size() && s1[i] == s3[k]){
     ans= dp(s1,s2,s3,i+1,j,k+1,arr);
    }
    return arr[i][j]=ans;
    }



    bool isInterleave(string s1, string s2, string s3) {
     int i=0,j=0,k=0;
     vector<vector<int>>arr(s1.size()+1,vector<int>(s2.size()+1,-1));
     return dp(s1,s2,s3,i,j,k,arr);
        
    }
};