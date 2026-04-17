class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mp1,mp2;
        if(s.size()!=t.size()){
            return false;
        }
        int value=min(s.size(),t.size());
        for(int i=0;i<value;i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(int i='a';i<'z';i++){
            if(mp1[i]!=mp2[i]){
                return false;
            }
        }
        return true;
    }
};
