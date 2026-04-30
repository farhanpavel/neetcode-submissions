class Solution {
public:
   vector<vector<int>>ans;
    void printSubsets(vector<int>&nums,vector<int>&arr,int i){
    if(i==nums.size()){
    ans.push_back(arr);
    return ;        
    }
    arr.push_back(nums[i]);
    printSubsets(nums,arr,i+1);
    arr.pop_back();    
    printSubsets(nums,arr,i+1);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int>arr;
    int i=0;
    printSubsets (nums,arr,i);
    return ans;
    }
};
