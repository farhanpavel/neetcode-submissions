class Solution {
public:
    bool dp(vector<int>& nums, int range, int idx,vector<int>&arr) {
        if ((nums.size()-idx-1)<=range) {
            return true;
        }
        if(range==0) return false;
        if(arr[idx]!=-1){return arr[idx];}
        bool ans = false;
        for(int i=idx;i < nums.size()-1 && i<idx+range;i++){
        ans = dp(nums, nums[i+1], i+1,arr);
        if(ans==true){
        return arr[idx]=true;    
        }
        }
        return arr[idx]=ans;
    }

    bool canJump(vector<int>& nums) {
        int range = nums[0], idx = 0;
        vector<int>arr(nums.size()+1,-1);
        return dp(nums, range, idx,arr);
    }
};