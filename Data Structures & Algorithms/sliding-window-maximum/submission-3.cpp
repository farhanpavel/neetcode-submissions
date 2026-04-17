class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      deque<int>q;
      vector<int>output;
      int left=0,right=0,n=nums.size()-1;
      while(right<=n){
        while(!q.empty() && nums[q.back()]<nums[right]){
        q.pop_back();
        }
        q.push_back(right);
        if(left>q.front()){
            q.pop_front();
        }
        if(right-left+1>=k){
            output.push_back(nums[q.front()]);
            left++;
        }
        right++;

      }
      return output;  
    }
};
