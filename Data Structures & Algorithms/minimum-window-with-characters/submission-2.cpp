class Solution {
public:
    string minWindow(string s, string t) {
     int right=0,left=0;
     int n=s.size(),m=t.size();
     map<char,int>mp;
     for(int i=0;i<m;i++){
      mp[t[i]]++;
     }
     int count=t.size();
     int len=INT_MAX;
     string ans="";
     while(right<n){
     if(mp.count(s[right])){
     mp[s[right]]--;
     if(mp[s[right]]>=0){
     count--;
     }
     } 
     while(count==0){
      if(len>right-left+1){
      ans=s.substr(left,right-left+1);
      len=right-left+1;   
      }
      if(mp.count(s[left])){
      mp[s[left]]++;
      if(mp[s[left]] > 0){
         count++;
       }
      }
      left++;
     }
     right++;
     }
     return ans;   
    }
};
