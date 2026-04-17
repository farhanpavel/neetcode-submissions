class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans=1;
        vector<int>v;
        int zero=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]!=0){
            ans*=nums[i];
            }
            else{
            zero++;
            }
        }
        if(zero>1){
            ans=0;
        }
        for(int i=0;i<nums.size();i++){
            if((zero==0))
            {
                v.push_back(ans/nums[i]);
            }
            else if(zero==1 && nums[i]==0){
            v.push_back(ans);
            
            }
            else {
                v.push_back(0);
            }
           
        }
        return v;
    }
};
