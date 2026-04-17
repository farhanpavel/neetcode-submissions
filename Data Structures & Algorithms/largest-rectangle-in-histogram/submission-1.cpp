class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     int n=heights.size();
     vector<int>next(n,n);
     vector<int>prev(n,-1);
     stack<int>st1,st2;
     int left=0,right=n-1;
     while(left<n){
     while(!st1.empty() && heights[st1.top()] > heights[left]){
     next[st1.top()]=left;
     st1.pop();   
     }
     st1.push(left);   
     left++;   
     }
    while(right>=0){
     while(!st2.empty() && heights[st2.top()] > heights[right]){
     prev[st2.top()]=right;
     st2.pop();   
     }
     st2.push(right);   
     right--;   
     }
     int ans=INT_MIN;
     for(int i=0;i<n;i++){
      ans=max(ans,(heights[i]*(next[i]-prev[i]-1)));  
     }
     return ans;

    }
};
