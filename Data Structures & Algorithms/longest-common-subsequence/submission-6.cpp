class Solution {
public:

    int dp(string text1,string text2,int i ,int j,vector<vector<int>>&arr){
    if(i==text1.size() || j==text2.size()){
    return 0;    
    }    
    if(arr[i][j]!=-1) return arr[i][j];
    if(text1[i]==text2[j]){
    return arr[i][j]=1+dp(text1,text2,i+1,j+1,arr); 
    }     
    return arr[i][j]=max(dp(text1,text2,i,j+1,arr),dp(text1,text2,i+1,j,arr));

    }

    int longestCommonSubsequence(string text1, string text2) {
    int i=0,j=0;
    vector<vector<int>>arr(text1.size(),vector<int>(text2.size(),-1));
    return dp(text1,text2,i,j,arr);    
    }
};
