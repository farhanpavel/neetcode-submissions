class Solution {
public:
    vector<string>ans;
    string store="";
   void backtrack(string s, string temp, string store, int count){
    if(s.size()==0) return;
    

    if(store.size()>3) return;                         
    if(store.size()>1 && store[0]=='0') return;       
    if(store.size()>0 && stoi(store)>255) return;      
    
    if(count==3 && s.size()>1 && s[0]=='0') return;   
    if(count==3){
        if(s.size()>3) return;
        if(stoi(s)>255) return;
        ans.push_back(temp+s);
        return;
    }
    
    for(int i=0; i<s.size(); i++){
        store = s.substr(0, i+1);
        backtrack(s.substr(i+1), temp+store+'.', store, count+1);
    }
}

    vector<string> restoreIpAddresses(string s) {
    string temp="";
    int count=0;
    string temp2="";
    backtrack(s,temp,temp2,count);
    return ans;
    }
};