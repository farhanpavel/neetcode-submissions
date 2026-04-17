class Solution {
public:
    int characterReplacement(string s, int k) {
    int right=0,left=0;
    int n=s.size();
    map<char,int>mp;
    int diff=0,value=INT_MIN,freq=0,ans=INT_MIN;
    while(right<n){
    mp[s[right]]++;    
    value=max(value,mp[s[right]]);
    diff=right-left+1;
    freq=(diff-value);
    if(freq>k){

    mp[s[left]]--;
    left++;
    value=INT_MIN;
    }
    ans=max(ans,right-left+1);
    right++;
    }    
    return ans;

    }
};
