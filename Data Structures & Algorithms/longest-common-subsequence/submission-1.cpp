class Solution {
public:
    int dp2(string text1,string text2,int idx1,int idx2, vector<vector<int>>&arr){
     if(idx1<0 || idx2<0){
     return 0;   
     }   
     if(arr[idx1][idx2]!=-1) return arr[idx1][idx2];

     if(text1[idx1]==text2[idx2]){
     return 1+dp2(text1,text2,idx1-1,idx2-1,arr);   
     }   

     return arr[idx1][idx2]=max(dp2(text1,text2,idx1,idx2-1,arr),dp2(text1,text2,idx1-1,idx2,arr)); 
    }

    int longestCommonSubsequence(string text1, string text2) {
    int idx1=text1.size()-1;
    int idx2=text2.size()-1;
    int n=text1.size(),m=text2.size();
    vector<vector<int>>arr(n,vector<int>(m,-1));
    return dp2(text1,text2,idx1,idx2,arr);    
    }
};
