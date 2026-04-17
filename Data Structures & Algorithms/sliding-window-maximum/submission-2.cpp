class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     int left=0,right=0,n=nums.size()-1;
     map<int,int>mp;
     vector<int>v;
     while(right<=n){
     mp[nums[right]]++;
     if(right-left+1>=k){
        
        if(mp[nums[left]]>=1){
            mp[nums[left]]--;
        }
        int value = mp.rbegin()->first;
        v.push_back(value);
        if(mp[nums[left]]==0){
            mp.erase(nums[left]);
        }
        left++;
     }      
     right++;
     }
     return v;   
    }
};
