class Solution {
public:
    // int dp(vector<int>&cost,vector<int>&arr,int i){  
    // if(i==cost.size()-1 || i==cost.size()-2){
    // return cost[i];    
    // }
    // if(arr[i]!=-1)return arr[i];
    // int left=dp(cost,arr,i+1);
    // int right=dp(cost,arr,i+2);    
    // return arr[i]=min(left,right)+cost[i];     
    // }
     
    int minCostClimbingStairs(vector<int>& cost) {
     int i=0,value=0;
    
     vector<int>arr(cost.size()+1,-1);
     arr[cost.size()-1]=cost[cost.size()-1];
     arr[cost.size()-2]=cost[cost.size()-2];
     
     for(int i=cost.size()-3;i>=0;i--){
     int left=arr[i+1];
     int right=arr[i+2];    
     arr[i]=min(left,right)+cost[i];    
     }

    
     return min(arr[0],arr[1]);

    }
};
