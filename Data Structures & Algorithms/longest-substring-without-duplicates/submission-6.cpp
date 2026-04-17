class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     map<char,int>mp;
     int left=0,right=0,n=s.size()-1,ans=1;
     while(right<=n){
        if(mp.count(s[right]) != 0){
          left=max(mp[s[right]]+1,left) ;
        }
       
          ans=max(ans,right-left+1);
       mp[s[right]]=right;
       right++;
     }
     if(s.empty()){
        return 0;
     }
    return ans;
    }
};
