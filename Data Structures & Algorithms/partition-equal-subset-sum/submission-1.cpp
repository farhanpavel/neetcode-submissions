class Solution {
public:
   
    bool dp(vector<int>&nums,int idx,vector<int>&arr,int value,int ans,map<int,int>&mp){
    if(idx==nums.size()){
    if(value==ans) return true;   
    return false;    
    }    
    if(mp.find(value)!=mp.end()){return mp[value];}
          
    bool take = dp(nums,idx+1,arr,value+nums[idx],ans,mp);
    bool nottake= dp(nums,idx+1,arr,value,ans,mp);
    return mp[value] = take || nottake; 
    }

    bool canPartition(vector<int>& nums) {
    vector<int>arr;
    int idx=0,value=0,ans=0;
    for(int i=0;i<nums.size();i++){
    ans+=nums[i];    
    }
    map<int,int>mp;
    if(ans%2!=0) return false;
    ans=ans/2;
    return dp(nums,idx,arr,value,ans,mp);
    
     
    }
};
