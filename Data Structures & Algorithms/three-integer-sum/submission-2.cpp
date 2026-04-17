class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
        set<vector<int>>st;
        int n=nums.size()-1;
        int right=n,left=0;
        int third=1;
        sort(nums.begin(),nums.end());
        while(left<n){
           while(third<right){
            if(nums[left]+nums[third]+nums[right]==0){
             st.insert({nums[left],nums[third],nums[right]});   
             third++;
             right--;
            }
            else if(nums[left]+nums[third]+nums[right]>0){
                right--;
            }
            else if(nums[left]+nums[third]+nums[right]<0){
                third++;
            }
           }
           left++; 
           right=n;
           third=left+1;
        }
          vector<vector<int>>v(st.begin(),st.end());
        return v;
    }
};
