class Solution {
public:

    
    int maxSubArray(vector<int>& nums) {
    int suff =0,pre=0;
    int ans =INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(pre<0){
         pre=0;   
        }
        if(suff<0){
            suff=0;
        }
    pre+=nums[i];    
    suff+=nums[nums.size()-i-1];
    int value = max(pre,suff);
    ans = max(ans,value);
    }
    return ans;

    }
};
