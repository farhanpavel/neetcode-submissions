class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int ans=0;
    for(int i=0;i<prices.size()-1;i++){
    int value=prices[i+1]-prices[i];
    cout<<value<<endl;
    if(value>=0){
    ans+=value;    
    }
    }
    return ans;
    }
};