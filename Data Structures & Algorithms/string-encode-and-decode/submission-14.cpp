class Solution {
public:

    string encode(vector<string>& strs) {
      string ans="";
      for(int i=0;i<strs.size();i++){
        ans+=(strs[i] + "#,");
      }
      return ans;  
    }

    vector<string> decode(string s) {
     vector<string>v;
     bool check=false;
     string ansMain="";
     for(int i=0;i<s.size();i++){
     if(i+1<s.size()&&s[i]=='#' && s[i+1]==','){
       check=true;
     }
     else if(check==true){
      v.push_back(ansMain);  
      check=false;
      ansMain=""; 
     }
     else{
        ansMain+=s[i];
     }
      
     } 
    
     return v; 
    }
};
