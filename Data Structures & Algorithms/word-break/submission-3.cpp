class Solution {
public:
    bool check=false;
    bool dp(string &s,string temp,vector<string>&wordDict,int n,map<string,bool>&mp,string &word,int pos){
    if(temp==s) return true;
    if(temp.size()>=s.size()) return false;
    if(mp.find(temp)!=mp.end()) return mp[temp];    
    
    for(int i=0;i<n;i++){
    if(wordDict[i]==s.substr(pos, wordDict[i].size()))    {
    check=dp(s,temp+wordDict[i],wordDict,wordDict.size(),mp,wordDict[i],pos+wordDict[i].size());    
     if(check==true)  break;
     
    }
    }    
    return mp[temp]=check;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
    int pos=0;
    string temp=""; 
    string word="";
    map<string,bool>mp;
    return dp(s,temp,wordDict,wordDict.size(),mp,word,pos);   
    }
};
