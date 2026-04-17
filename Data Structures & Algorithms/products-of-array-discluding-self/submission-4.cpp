class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>pre(nums.size(),1),suf(nums.size(),1);
    pre[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        pre[i]=nums[i]*pre[i-1];

    }
    suf[nums.size()-1]=nums[nums.size()-1];
    for(int i=nums.size()-2;i>=0;i--){
        suf[i]=suf[i+1]*nums[i];
    }
    vector<int>v;
    for(int i=0;i<nums.size();i++){
      if(i-1<0){
       v.push_back(suf[i+1]);  
        
      }
      else if(i+1>nums.size()-1){
        v.push_back(pre[i-1]);  
          
      }
      else{
        v.push_back(suf[i+1] * pre[i-1]);  
   
      }  
    }
    return v;

    }
};
