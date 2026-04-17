class Solution {
public:
    int majorityElement(vector<int>& nums) {
     map<int,int>mp;
     int value=0,ans=0;
     for(int i=0;i<nums.size() ;i++){
        mp[nums[i]]++;
        if(value< mp[nums[i]]){
           value=max(value,mp[nums[i]]);
           ans=nums[i]; 
        }
     }
     return ans;   
    }
};