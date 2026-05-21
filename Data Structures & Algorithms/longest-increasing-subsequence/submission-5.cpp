class Solution {
public:
   int dp(vector<int>&nums,int temp,int idx,vector<int>&arr){
    if(idx==nums.size()){return 0;}
    if(arr[idx]!=-1){return arr[idx];}
    int ans=0;
    for(int i=idx;i<nums.size();i++){
    if(nums[i]>temp || temp==INT_MIN){    
    int temp2 = dp(nums,nums[i],i+1,arr)+1; 
    ans=max(ans,temp2);
    }   
    }
    return arr[idx]=ans;
   } 
   

    int lengthOfLIS(vector<int>& nums) {
    int temp=INT_MIN;
   vector<int>arr(nums.size(),-1);
    int idx=0;
    return dp(nums,temp,idx,arr); 
    }
};
