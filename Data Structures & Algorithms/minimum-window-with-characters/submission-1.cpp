class Solution {
public:
    string minWindow(string s, string t) {
       map<int,int>mp1,mp2;
       int left=0,right=0,n=s.size()-1,m=t.size()-1,have=0,curr=0,start=0;
       for(int i=0;i<=m;i++){
          mp1[t[i]]++;  
       }
       int need=mp1.size();
       while(right<=n){

        mp2[s[right]]++;  
          //dubli check,len check
        if(mp1[s[right]]==mp2[s[right]]){
          have++;
        } 
        while(have==need){
         int value=right-left+1;
         if(value<curr || curr==0){
          curr=value;
          start=left;
         }
        if(mp1.count(s[left])){
        if(mp2[s[left]] == mp1[s[left]])
        {have--;} 
        mp2[s[left]]--;
        }
      
        
        
        
        left++;  
        }
      
        if(have==need){
         int value=right-left+1;
         if(value<curr || curr==0){
          curr=value;
          start=left;
         }
        }
        right++;
       } 
       string ans=s.substr(start,curr);
       return ans;
    }
};
