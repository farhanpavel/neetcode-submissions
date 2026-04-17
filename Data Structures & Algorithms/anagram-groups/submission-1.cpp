class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>copy(strs);
        vector<vector<string>>ans;
        map<string,vector<int>>mp;
        for(int i=0; i < strs.size() ; i++){
        sort(strs[i].begin(),strs[i].end());
        mp[strs[i]].push_back(i);    
        }
        for(auto &it : mp){
            vector<string>v;
            for(int idx : it.second){
               v.push_back(copy[idx]);     
            }
            ans.push_back(v);
        }
        return ans;
    }
};
