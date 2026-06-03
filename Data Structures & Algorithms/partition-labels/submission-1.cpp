class Solution {
public:
    vector<int> partitionLabels(string s) {
    unordered_map<char,int>mp;
    vector<int>ans;
    for(int i=0;i<s.size();i++){
    mp[s[i]]=i;    
    }   
    int start=0,end=0;
    for(int i=0;i<s.size();i++){
    end=max(end,mp[s[i]]);

    if(end==i){
    ans.push_back(end-start+1);
    start=i+1;    
    }    
    }
    return ans;
    }
};
