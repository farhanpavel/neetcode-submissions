class Solution {
public:
    int dp(vector<int>& prices,int idx,int buy,vector<vector<int>>&arr){
    if(idx>=prices.size()){
    return 0;    
    }
    if(arr[idx][buy]!=-1){
        return arr[idx][buy];
    }
    int profit=0;    
    
    if(buy==1){
    profit = max(
    -prices[idx]+dp(prices,idx+1,0,arr),    
    dp(prices,idx+1,1,arr)
    );
    }else{
    profit = max(
    prices[idx]+dp(prices,idx+2,1,arr),    
    dp(prices,idx+1,0,arr)
    );
    }    
    return arr[idx][buy]=profit;
    } 


    int maxProfit(vector<int>& prices) {
    int idx=0,buy=1;
    vector<vector<int>>arr(prices.size()+1,vector<int>(prices.size()+1,-1));
    return dp(prices,idx,buy,arr);    
    }
};