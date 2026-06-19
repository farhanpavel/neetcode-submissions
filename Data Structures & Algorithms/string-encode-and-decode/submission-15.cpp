class Solution {
public:

    string encode(vector<string>& strs) {
    string ans = "";
    for(int i=0; i<strs.size() ; i++){
    ans+=strs[i];
    ans+="#4";    
    }    
    return ans;
    }

    vector<string> decode(string s) {
    vector<string>ans;
    string temp = "";
    for(int i=0;i<s.size() ;i++){
    if(i+1<s.size() && s[i]=='#' && s[i+1]=='4'){
    ans.push_back(temp);
    i++;
    temp="";    
    }
    else{
    temp+=s[i];        
    }    
    }
    return ans;
    }
};
