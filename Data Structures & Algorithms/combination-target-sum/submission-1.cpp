class Solution {
public:
    vector<vector<int>>ans;
   // set<vector<int>>st;
    void sumPrint(vector<int>&nums,vector<int>&temp,int target,int i)
    {
    if(i==nums.size() || target<0){
     return;   
    }
    if(target==0){
      ans.push_back(temp);    
     return;
    }
    temp.push_back(nums[i]);
    //sumPrint(nums,temp,target-nums[i],i+1);
    sumPrint(nums,temp,target-nums[i],i);
    temp.pop_back();
    sumPrint(nums,temp,target,i+1);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    vector<int>temp;
    int i=0;
    sumPrint(nums,temp,target,i);        
    return ans;
    }
};
