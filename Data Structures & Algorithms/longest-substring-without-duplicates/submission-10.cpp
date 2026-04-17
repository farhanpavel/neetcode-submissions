class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int left=0,right=0;
    int n=s.size();
    int ans=INT_MIN;
    map<char,int>mp;
    if(s.empty()){
        return 0;
    }
    while(right<n){
    if(mp.count(s[right])){
    left=max(left,mp[s[right]]+1);
    }
    mp[s[right]]=right;     
    ans=max(ans,right-left+1);  
    right++;
    }   
    return ans; 
    }
};
