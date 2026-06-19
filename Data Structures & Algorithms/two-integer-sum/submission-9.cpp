class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int,int>mp;
     for(int i=0;i<nums.size();i++){
     mp[nums[i]]=i;   
     }
     for(int i=0;i<nums.size();i++){
     int value = target-nums[i];   
     if(mp.find(value)!=mp.end() && mp[value]!=i){
     return {i,mp[value]};   
     }   
     }
     return {0,0};
    }
};
