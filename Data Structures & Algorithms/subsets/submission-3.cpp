class Solution {
public:

   vector<vector<int>>ans;
    void dp(vector<int>&nums,int idx,vector<int>&arr){
    if(idx==nums.size()){
    ans.push_back(arr);
    return;    
    }    
    arr.push_back(nums[idx]);        
    dp(nums,idx+1,arr);
    arr.pop_back();
    dp(nums,idx+1,arr);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int>arr;
    int idx=0;
    dp(nums,idx,arr);
    return ans;   
    }
};
