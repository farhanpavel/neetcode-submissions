class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>>mp;
        vector<string>v;
        vector<vector<string>>v2;
        for(int i=0 ; i<strs.size() ; i++){
            v.push_back(strs[i]);
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(i);
        }
         for(int i=0 ; i<strs.size() ; i++){
           vector<string>v3;
           int flag=0;
           if(mp[strs[i]].size() > 1){
            for(int j=0;j<mp[strs[i]].size();j++){
                if(mp[strs[i]][j]!=-1){
                    flag=1;
                    v3.push_back(v[mp[strs[i]][j]]);
                    mp[strs[i]][j]=-1;
                } 
            }
            if(flag==1){
                v2.push_back(v3);
            }
            
           }
           else{
            v2.push_back({v[i]});
           }
            
        }
        return v2;
       
    }
};
