class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<string,vector<string>>mp;
      set<string>st;
      for(int i=0;i<strs.size();i++){
        string temp=strs[i];
        sort(temp.begin(),temp.end());
        st.insert(temp);
        mp[temp].push_back(strs[i]);
      }
      vector<vector<string>>ans;
      for(string x : st){
      ans.push_back(mp[x]);  
      }
      return ans;  
    }
};
