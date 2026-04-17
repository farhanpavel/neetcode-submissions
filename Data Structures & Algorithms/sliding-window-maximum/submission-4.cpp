class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     deque<int>d;
     int right=0,left=0;
     vector<int>v;
     int n=nums.size();
     while(right<n){
      while(!d.empty() && d.back()<nums[right]){
        d.pop_back();
      }
      d.push_back(nums[right]);
      
      if(right-left+1 == k){
      v.push_back(d.front());
      if(d.front() == nums[left]){
        d.pop_front();
      }
      left++;

      }
      

      right++;
     }   
     return v;
    }
};
