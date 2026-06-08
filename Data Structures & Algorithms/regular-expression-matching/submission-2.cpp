class Solution {
public:
    bool dp(string s,string p,map<pair<string,string>,bool>&mp){
    if(p.size()==0){
     if(s.size()==0) return true;
     return false;   
    }
    if(mp.find({s,p})!=mp.end()) return mp[{s,p}];
    bool firstChar = false;
    if((s.size() > 0 && (s[0] == p[0] || p[0] == '.'))){
    firstChar =true;    
    }
   if(p.size() >= 2 && p[1] == '*'){
    bool not_take = dp(s,p.substr(2),mp);
    bool take = firstChar && dp(s.substr(1),p,mp);     
    return  mp[{s,p}]=not_take || take;
    }
    else{
    return  mp[{s,p}]=firstChar && dp(s.substr(1),p.substr(1),mp);    
    }
    
    }



    bool isMatch(string s, string p) {
    map<pair<string,string>,bool>mp;    
    return dp(s,p,mp);    
    }
};