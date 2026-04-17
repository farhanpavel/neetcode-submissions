class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int left=0,right=0;
     int n=prices.size();
     int ans=INT_MIN;
     while(right<n){
     if(prices[left]>prices[right]){
     left=right;
     }   
     ans=max(ans,prices[right]-prices[left]);
     right++;   
     }
     return ans;   
    }
};
