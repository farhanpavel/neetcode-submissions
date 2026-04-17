class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      int left=0,right=heights.size()-1,n=heights.size()-1;
      vector<int>next(n+1,-1),prev(n+1,-1);
      stack<int>st1,st2;
      while(left<=n){
        while(!st1.empty() && heights[st1.top()]>heights[left]){
            next[st1.top()]=left;
            st1.pop();
        }
        st1.push(left);
        left++;
      }
      while(right>=0){
        while(!st2.empty() && heights[st2.top()]>heights[right]){
            prev[st2.top()]=right;
            st2.pop();
        }
        st2.push(right);
        right--;
      }
      int ans=0;
      for(int i=0 ; i<next.size() ;i++){
        if(next[i]==-1){
            next[i]=heights.size();       
         }
      int value= ((next[i]-prev[i]-1)*heights[i]);
      ans=max(value,ans);  
      }
      return ans;  
    }
};
