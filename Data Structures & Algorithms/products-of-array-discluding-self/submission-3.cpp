class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1(n),v2(n),v3(n);
        v1[0]=nums[0];
        for(int i=1 ; i<nums.size() ; i++){
          v1[i]=v1[i-1]*nums[i];  
        }
        v2[n-1]=nums[n-1];
        for(int i=n-1 ; i>=0 ; i--){
          v2[i-1]=v2[i]*nums[i-1];  
        }
        int ans=0;
        for(int i=0 ; i<n ; i++){
        if(i-1<0)
        {
            ans=v2[i+1];
        }
        else if(i+1>=n){
            ans=v1[i-1];
        }
        else
        {
         ans=v1[i-1]*v2[i+1];
        }
        v3[i]=ans; 
        }
        return v3;
    }
};
