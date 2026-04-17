class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int left=0,right=0,profit=0,n=prices.size()-1,ans=0;
       while(right<=n){
        
        while(left+1<=n && prices[left]>=prices[left+1]){
            left++;
            right=left;
        }
        if( right+1<=n && prices[right]>=prices[right+1] && prices[left]>=prices[right+1]){
            left=right;
        }
       
        right++;
        if(right<=n && left<=n)
        ans=max(ans,prices[right]-prices[left]);
       }
       return ans; 
    }
};
