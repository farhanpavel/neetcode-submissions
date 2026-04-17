class Solution {
public:

    string encode(vector<string>& strs) {
      string s;
      for(int i=0;i<strs.size();i++){
        s+=strs[i];
        s+="%%";
      }
      return s;
    }

    vector<string> decode(string s) {
        vector<string>v;
        string x;
        
        for(int i=0;i<s.size();i++){
        if(i+1<s.size() && s[i]=='%' && s[i+1]=='%' ){
         v.push_back(x);
         x="";
         i++;   
        }
        else{
           x+=s[i]; 
        }        
        }
        return v;
    }
};
