class Solution {
public:
    
   
    string longestPalindrome(string s) {
    
    int left=-1,right=s.size(),i=0;
    string realAns="";
    while(i<s.size()){  
    left=i;
    right=i;
    string ans="";
    while( left>=0 && right<s.size() && s[left]==s[right]){
    ans=(s.substr(left,right-left+1));
    left--;
    right++;    
   
    }    
    if(ans.size()>realAns.size()){
    realAns=ans;    
    }  
   
    left=i;
    right=i+1;
    ans="";
    while(left>=0 && right<s.size() && s[left]==s[right]){
    ans=(s.substr(left,right-left+1));
    left--;
    right++;    
    }    
    if(ans.size()>realAns.size()){
    realAns=ans;    
    }           
    i++;   
    }
    
     
    
    return realAns;    
    }
};
