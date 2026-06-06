class Solution {
public:
    int dp(int amount,vector<int>&coins,int idx,vector<vector<int>>&arr){
     if(amount==0){
     return 1;   
     }   
     if(amount<0 || idx==coins.size()){
     return 0;   
     }
     if(arr[amount][idx]!=-1){return arr[amount][idx];}
     int ans=0;
     for(int i=idx;i<coins.size();i++){
     ans += dp(amount-coins[i],coins,i,arr);   
     }
     return arr[amount][idx]=ans;
    }


    int change(int amount, vector<int>& coins) {
    int idx=0;
    vector<vector<int>>arr(amount+1,vector<int>(coins.size()+1,-1));
    return dp(amount,coins,idx,arr);    
    }
};
