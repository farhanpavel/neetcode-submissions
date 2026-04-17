class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int>mp;
       set<int>st;
       vector<pair<int,int>>p;
       vector<int>v;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        st.insert(nums[i]);
       }
       for(int x : st){
        p.push_back({mp[x],x});
       }
       sort(p.begin(),p.end(),greater<pair<int,int>>());
       for(int i=0 ;i<k; i++){
        
        v.push_back(p[i].second);
       }
       return v;
    }
};
