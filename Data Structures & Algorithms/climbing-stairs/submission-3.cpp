class Solution {
public:
    int dp(int n,vector<int>&arr){
   
    if(n==0){
    return 1;    
    }
    if(arr[n]!=-1) return arr[n];
    return arr[n]=dp(n-1,arr)+dp(n-2,arr);     
    }
    int climbStairs(int n) {
    vector<int>arr(n+1,-1);
   
    
    return dp(n,arr);
         
    }
};
