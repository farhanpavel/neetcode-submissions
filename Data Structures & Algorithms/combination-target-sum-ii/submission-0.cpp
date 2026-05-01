class Solution {
public:
    vector<vector<int>>ans;
    void combPrint(vector<int>&nums,vector<int>&arr,int target,int i){
    if(target==0){
    ans.push_back(arr);
    return ;    
    } 
    if(target<0 || i==nums.size()){
        return ;
    }
    
    
    arr.push_back(nums[i]);    
    combPrint(nums,arr,target-nums[i],i+1);
    while(i+1<nums.size() && nums[i]==nums[i+1]){
     i++;   
    }
    arr.pop_back();
    
    combPrint(nums,arr,target,i+1);
    

    } 


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<int>arr;
    int i=0;
    combPrint(candidates,arr,target,i);   
    return ans; 
    }
};
