class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    int left=0,mid=1,right=nums.size()-1;
   int n=nums.size();
   sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    set<vector<int>>st;
    while(left<n){
        while(mid<right){
        if(nums[mid]+nums[right]+nums[left]==0){
         vector<int>v;  
          v.push_back(nums[left]);
          v.push_back(nums[mid]);
          v.push_back(nums[right]);
          st.insert(v);
          mid++;
          right--;
        }    
        else if(nums[mid]+nums[right]+nums[left]>0){
         right--;   
        } 
        else{
        mid++;
        }   
        }
        left++;
        mid=left+1;
        right=n-1;
    }
    for(auto &x : st){
    ans.push_back(x);    
    }
    return  ans;

    }
};
