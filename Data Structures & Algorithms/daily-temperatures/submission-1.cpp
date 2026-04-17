class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      int left=0,right=0,n=temperatures.size()-1;
      vector<int>ans(n+1,0);
      stack<int>st;
      while(right<=n){
        while(!st.empty() && temperatures[right]>temperatures[st.top()]){
            ans[st.top()]=(right-st.top());
            st.pop();
        }
        st.push(right);
        right++;
      }
      return ans;  
    }
};
