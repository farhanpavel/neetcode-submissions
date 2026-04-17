class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int value=0;
      for(int x : st){
        int curr=x;
       if(st.find(curr-1) == st.end()){
        int count=0;
        while(st.find(curr)!=st.end()){
            curr++;
            count++;
        }
          value=max(value,count);
       }
      
        
      }
        return value;
    }
};
