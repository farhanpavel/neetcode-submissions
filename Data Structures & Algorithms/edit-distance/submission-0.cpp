class Solution {
public:
    int dp(string word1,string word2,int i ,int j,vector<vector<int>>&arr){
    if(i==word1.size() && j==word2.size()){
    return 0;    
    }
    if(j>=word2.size()) return word1.size()-i;
    if(i>=word1.size()) return word2.size()-j;
    if(arr[i][j]!=-1) return arr[i][j];
    int ans = INT_MAX-1,value=0; 
    if(word1[i]==word2[j]){
    value =dp(word1,word2,i+1,j+1,arr);    
    }else{
    value = min({1+dp(word1,word2,i+1,j,arr),1+dp(word1,word2,i,j+1,arr),1+dp(word1,word2,i+1,j+1,arr)});      
    }
    ans = min(value,ans);
    return arr[i][j]=ans;    
    }


    int minDistance(string word1, string word2) {
    int i=0,j=0;
    vector<vector<int>>arr(word1.size()+1,vector<int>(word2.size()+1,-1));
    return dp(word1,word2,i,j,arr);   
    }
};
