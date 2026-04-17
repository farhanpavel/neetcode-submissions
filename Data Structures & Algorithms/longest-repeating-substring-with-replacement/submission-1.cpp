class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size()-1,ans=0, left=0,right=0,len=0,freq=0;
        map<int,int>mp;
        while(right<=n){
         mp[s[right]-'A']++;
         freq=max(freq,mp[s[right]-'A']);   
         len=right-left+1;
         if((len-freq)>k){
            mp[s[left]-'A']--;
            left++;
            len--;
         }
         
        right++;
         
         ans=max(ans,len);   
        }
        return ans;
    }
};
