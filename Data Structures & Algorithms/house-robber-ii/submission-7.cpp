class Solution {
public:
    // int max1; 
    // int dp(vector<int>& nums,vector<int>&arr,int n,int i){
    // if(i>n){
    //     return 0;
    // }
    //  if(i==n){
    // return nums[i];    
    // } 
     
    // if(arr[i]!= -1 ) return arr[i];
    // return  arr[i]=max(dp(nums,arr,n,i+2)+nums[i],dp(nums,arr,n,i+1));   
    // }


    int rob(vector<int>& nums) {
    if(nums.size()==1){
        return nums[0];
    }    
    vector<int>arr1(nums.size()+1,0);
    vector<int>arr2(nums.size()+1,0);
    int i=0;
    arr1[nums.size()-2]=nums[nums.size()-2];
    for(int i=nums.size()-3;i>=0;i--){
    arr1[i]=max(arr1[i+2]+nums[i],arr1[i+1]);    
    }
    arr2[nums.size()-1]=nums[nums.size()-1];
    for(int i=nums.size()-2;i>=1;i--){
    arr2[i]=max(arr2[i+2]+nums[i],arr2[i+1]);    
    }
    
    return max(arr1[0],arr2[1]); 
    
    
    
    }
};
