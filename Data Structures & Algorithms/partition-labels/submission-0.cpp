class Solution {
public:
    vector<int> partitionLabels(string s) {
    unordered_map<char,int>mp;
    vector<int>ans;
    for(int i=0;i<s.size();i++){
    mp[s[i]]=i;    
    }
    for(int i=0;i<s.size();i++){
    int value = mp[s[i]];
    for(int j=i+1;j<=value;j++){
    if(mp[s[j]]>value){
    value=mp[s[j]];
    }    
    }
    ans.push_back(value-i+1);
    i=value;    
    }
    return ans;    
    }
};
