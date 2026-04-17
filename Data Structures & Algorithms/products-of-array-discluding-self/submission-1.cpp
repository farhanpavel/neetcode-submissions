class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre,suf,ans;
        int value1=1,value2=1;
        for(int i=0;i<nums.size();i++){
            value1*=nums[i];
            pre.push_back(value1);
        }
        for(int i=nums.size()-1;i>=0;i--){
            value2*=nums[i];
            suf.push_back(value2);
        }
        reverse(suf.begin(),suf.end());
        for(int i=0;i<nums.size();i++){
            if((i-1)<0){
            ans.push_back(suf[i+1]);    
            }
            else if((i+1)>nums.size()-1)
            {
            ans.push_back(pre[i-1]);    
            }
            else
            {
            ans.push_back(pre[i-1]*suf[i+1]);
            }
        }
        return ans;
    }
};
