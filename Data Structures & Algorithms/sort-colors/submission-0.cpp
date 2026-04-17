class Solution {
public:
    void sortColors(vector<int>& nums) {
     int zero=0,one=0,two=0;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zero++;
        }
        else if(nums[i]==1){
            one++;
        }
        else{
            two++;
        }
     }
     vector<int>v;
     for(int i=0;i<nums.size();i++){
        if(zero>0){
          v.push_back(0);
          zero--;  
        }
        else if(one>0){
         v.push_back(1);
        one--;  
        }
        else{
        v.push_back(2);
        two--;
        }

     }   
     nums=v;
    }
};