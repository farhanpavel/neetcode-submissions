class Solution {
public:
  
    
    
    
    int countSubstrings(string s) {
    int left=0,right=0,i=0;
    string ans="",value="";
    int count=0;
    while(i<s.size()){
    //for odd
    left=i;
    right=i;
    while(left>=0 && right<s.size() && s[left]==s[right])
    {
     count++;   
     ans=s.substr(left,right-left+1);   
     left--;
     right++;   
    }
    // if(ans!=value){
    // value=ans;
    // count++;    
    // }
    left=i;
    right=i+1;
    while(left>=0 && right<s.size() && s[left]==s[right])
    {
        count++;
     ans=s.substr(left,right-left+1);   
     left--;
     right++;   
    }
    // if(ans!=value){
    // value=ans;
    // count++;    
    // }
   
    i++;    
    }
    return count;    
  
    }
};
