class Solution {
public:
    int dp(vector<int>& nums, int target,int idx,int temp,map<pair<int,int>,int>&mp){
    if(temp == target && idx==nums.size()){
    return 1;    
    } 
    if(idx==nums.size()){
    return 0;    
    } 
    if(mp.find({idx,temp})!=mp.end()){
    return mp[{idx,temp}];    
    } 
    int ans=(dp(nums,target,idx+1,temp+nums[idx],mp)+dp(nums,target,idx+1,temp-nums[idx],mp));
    return mp[{idx,temp}]=ans;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
    int temp=0,idx=0;
    map<pair<int,int>,int>mp;
    return dp(nums,target,idx,temp,mp);    
    }
};
