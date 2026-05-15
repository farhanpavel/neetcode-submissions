class Solution {
public:
    // int dp(vector<int>&nums,vector<int>&arr,int i){
    // if(i>=nums.size()){
    //  return 0;   
    // }  
    // if(arr[i]!=-1) return arr[i];

    // return arr[i]=(max((dp(nums,arr,i+2)+nums[i]),dp(nums,arr,i+1)));
    // }


    int rob(vector<int>& nums) {
    vector<int>arr(nums.size()+1,0);

    arr[nums.size()-1]=nums[nums.size()-1];
    for(int i=nums.size()-2;i>=0;i--){
    arr[i]=(max((arr[i+2]+nums[i]),arr[i+1]));    
    }
    
    return arr[0]  ;     
    }
};
