class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>&nums,vector<int>&arr,int idx){
    ans.push_back(arr);    
    for(int i=idx;i<nums.size();i++){
    arr.push_back(nums[i]) ;
    backtrack(nums,arr,i+1);
    arr.pop_back();   
    }
    }


    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int>arr;
    int idx=0;
    backtrack(nums,arr,idx);        
    return ans;
    }
};
