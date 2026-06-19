class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char,int>mp;
    if(s.size()!=t.size()) return false;
    for(int i=0;i<s.size();i++){
    mp[s[i]]++;
    mp[t[i]]--;
    if(mp[t[i]]==0) mp.erase(t[i]);    
    if(mp[s[i]]==0) mp.erase(s[i]);
    }
    if(mp.size()==0) return true;
    return false;    
    }
};
