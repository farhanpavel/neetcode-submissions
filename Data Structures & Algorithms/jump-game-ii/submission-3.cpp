class Solution {
public:
    int dp(vector<int>&nums,int idx,int range,  vector<int>&arr){
    if(range==0){
    return INT_MAX-10;
    } 
    if((nums.size()-1-idx)<=range){
    return 1;    
    }
       
    if(arr[idx]!=-1) return arr[idx];    
    int ans = INT_MAX-10;
    for(int i=idx;i < nums.size()-1 && i<idx+range;i++){
    int value = 1+dp(nums,i+1,nums[i+1],arr);
    ans=min(value,ans);    
    }
    return arr[idx]=ans;
    }


    int jump(vector<int>& nums) {
    int idx=0,range=nums[0];
    vector<int>arr(nums.size()+1,-1);
    int value2=dp(nums,idx,range,arr);    
    if(nums.size()==1) return 0;
    return value2;
    }
};
