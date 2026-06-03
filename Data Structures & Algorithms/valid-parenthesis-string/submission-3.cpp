class Solution {
public:
     bool dp(string s , int idx ,int open,   map<pair<int,int>,int>&mp){
     if(s.size() == idx && open==0){
     return true;   
     }
     else if(s.size()== idx && open!=0){
     return false;   
     }
     if(open<0) return false;
     if(mp.find({idx,open})!=mp.end()) return mp[{idx,open}];
     if(s[idx]==')'){
     return mp[{idx,open}]=dp(s,idx+1,open-1,mp);   
     }
     else if(s[idx]=='('){
     return mp[{idx,open}]=dp(s,idx+1,open+1,mp);    
     } 
     else{
     return mp[{idx,open}]=dp(s,idx+1,open,mp) || dp(s,idx+1,open-1,mp) ||dp(s,idx+1,open+1,mp);    
     }  
       
     }
   
   
    bool checkValidString(string s) {
    int idx=0,open=0;
    map<pair<int,int>,int>mp;
    return dp(s,idx,open,mp);
    }
};
