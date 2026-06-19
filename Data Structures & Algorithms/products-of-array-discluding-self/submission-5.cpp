class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>pre(nums.size(),1);
    vector<int>suff(nums.size(),1);
    pre[0]=nums[0];      
    for(int i=1;i<nums.size();i++){
    pre[i] = nums[i] * pre[i-1];
    }       
    suff[nums.size()-1]=nums[nums.size()-1];
    for(int i=nums.size()-2 ; i>=0 ; i--){
    suff[i] = nums[i] * suff[i+1];    
    } 
    vector<int>ans;
    for(int i=0 ; i<nums.size() ;i++){
    if(i-1<0){
    ans.push_back(suff[i+1]);    
    }
    else if(i+1>nums.size()-1){
    ans.push_back(pre[i-1]);    
    }    
    else{
    ans.push_back(pre[i-1] * suff[i+1]);        
    }
    }
    return ans;
    }
};
