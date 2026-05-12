class Solution {
public:
    int dp(vector<int>&nums,vector<int>&arr,int i){
    if(i>=nums.size()){
     return 0;   
    }
    if(i==nums.size()-1 ){
    return nums[i];    
    }    
    if(arr[i]!=-1) return arr[i];

    return arr[i]=(max((dp(nums,arr,i+2)+nums[i]),dp(nums,arr,i+1)));
    }


    int rob(vector<int>& nums) {
    vector<int>arr(nums.size()+1,-1);
    int i=0;    
    return  dp(nums,arr,i);     
    }
};
