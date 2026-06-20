class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>>ans;
     int first=0,second=1,third=nums.size()-1;
     sort(nums.begin(),nums.end());
     set<vector<int>>st;
     while(first<nums.size()){
     while(second<third){
     int value = nums[first]+nums[second]+nums[third];
     if(value == 0 ){
     if(st.find({nums[first],nums[second],nums[third]})==st.end()){
     st.insert({nums[first],nums[second],nums[third]}) ; 
     ans.push_back({nums[first],nums[second],nums[third]});      
     }
     if(second+1<nums.size() && nums[second]==nums[second+1]){
     second++;   
     }
     else if(third-1>=0 && nums[third]==nums[third-1]){
     third--;   
     }
     else{
      second++;
      third--;  
     }
     }
     else if(value > 0){
     third--;   
     } 
     else if(value<0){
     second++;   
     }
     }
     first++;
     second=first+1;
     third=nums.size()-1;   
     }
     return ans;   
    }
};
