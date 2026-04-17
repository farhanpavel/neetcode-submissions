class Solution {
public:
    string encode(vector<string>& strs) {
        string ans="";
        map<char,int>mp;
        for(int i=0 ; i<strs.size() ;i++){
        ans+=to_string(strs[i].size());
        ans+="#"; 
        ans+=strs[i]; 
        }
        return ans;
    }

    vector<string> decode(string s) {
      vector<string>v;
      string len="";
      for(int i=0 ; i<s.size() ; i++){
        if(s[i]!='#'){
        len+=s[i];
        }
        else if(s[i]=='#'){
        int value=stoi(len);
        string sub = s.substr(i+1,value);
        v.push_back(sub);
        i+=value;
        len="";
        }
        
       }  
        return v;

    }
};
