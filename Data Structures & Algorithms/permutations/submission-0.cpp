class Solution {
public:
    vector<vector<int>>ans;
    void permutationBuild(vector<int>&nums,vector<int>&arr,vector<bool>&used){
    if(nums.size()==arr.size()){
    ans.push_back(arr);
    return ;    
    }
    for(int i=0;i<nums.size();i++){
    if(used[i]==true){
    continue;    
    }
    arr.push_back(nums[i]);
    used[i]=true;
    permutationBuild(nums,arr,used);
    arr.pop_back();
    used[i]=false;
    }

    }


    vector<vector<int>>permute(vector<int>& nums) {
    vector<int>arr;
    vector<bool> used(nums.size(), false);
    permutationBuild(nums,arr,used);        
    return ans;
    }
};
