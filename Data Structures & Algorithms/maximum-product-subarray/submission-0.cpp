class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
    int suff=1,pref=1;
    int maxValue=INT_MIN;
    for(int i=0;i<nums.size();i++){
    if(pref==0){
    pref=1;    
    }
    if(suff==0){
    suff=1;    
    }
    pref=pref*nums[i];
    suff=suff*nums[nums.size()-i-1];
    maxValue=max(maxValue,max(pref,suff));        
    }
    return maxValue;   
    }
};
