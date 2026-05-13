class Solution {
public:
    int max1; 
    int dp(vector<int>& nums,vector<int>&arr,int n,int i){
    if(i>n){
        return 0;
    }
     if(i==n){
    return nums[i];    
    } 
     
    if(arr[i]!= -1 ) return arr[i];
    return  arr[i]=max(dp(nums,arr,n,i+2)+nums[i],dp(nums,arr,n,i+1));   
    }


    int rob(vector<int>& nums) {
    if(nums.size()==1){
        return nums[0];
    }    
    vector<int>arr1(nums.size()+1,-1);
    vector<int>arr2(nums.size()+1,-1);
    int i=0;
   
    int value=dp(nums,arr1,nums.size()-2,i);
    int value2=dp(nums,arr2,nums.size()-1,i+1);
    return max(value,value2);    
    
    
    
    }
};
