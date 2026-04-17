class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     int left=0,right=0,count=s1.size(),n=s1.size()-1,m=s2.size()-1;
     map<int,int>mp1;
     for(int i=0;i<=n;i++){
        mp1[s1[i]-'a']++;
     }
     while(right<=m){
      mp1[s2[right]-'a']--;
      if(mp1[s2[right]-'a']>=0) 
      {
      count--;
      }
      if(right-left+1>n+1){
         mp1[s2[left]-'a']++;
        if(mp1[s2[left]-'a']>0){
          count++;
        }
        left++;
      }
      if(count==0)
      return true;
      right++;
      }
     
return false;
    }
    
};
