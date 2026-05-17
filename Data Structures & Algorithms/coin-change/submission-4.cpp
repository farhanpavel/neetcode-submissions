class Solution {
public:

    int dp(vector<int>&coins,int amount,vector<int>&arr){
    if(amount==0){
    return 1;    
    }
    if(amount<0){
    return 111111;    
    }
    if(arr[amount]!=-1) return arr[amount];
    int ans=111111;    
    for(int i=0;i<coins.size();i++){
    int value= dp(coins,amount-coins[i],arr) +1 ;
    ans=min(ans,value);   
    }
    return arr[amount]=ans;
    }

    int coinChange(vector<int>& coins, int amount) {
    vector<int>arr(amount+1,-1);

    int value = dp(coins,amount,arr);
    if(value==111111){
    return -1;    
    }
    return value-1;
    }
};
