class Solution {
public:
    vector<vector<int>>ans;
    void printSubset(vector<int>&nums,vector<int>&arr,int i){
    if(i==nums.size()){
     ans.push_back(arr);
     return;   
    }
   
    // yes we will take it    
    arr.push_back(nums[i]);    
    printSubset(nums,arr,i+1);
    //no we will not take it
    // while(i+1<nums.size() && nums[i]==nums[i+1]){
    //  i++;   
    // }
    arr.pop_back();
    printSubset(nums,arr,i+1);

    }


    vector<vector<int>> subsets(vector<int>& nums) {
    int i=0;
    vector<int>arr;
    printSubset(nums,arr,i);           
    return ans;
    }
};
