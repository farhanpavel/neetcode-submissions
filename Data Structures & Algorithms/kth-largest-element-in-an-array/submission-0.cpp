class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int>pq;
     for(int i=0 ;i<nums.size();i++){
        pq.push(nums[i]);
     }
     int value=0;
     for(int i=0;i<k;i++){
     value=pq.top();
     pq.pop();   
     }
     return value;   
    }
};
