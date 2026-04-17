class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        set<int>st;
        vector<pair<int,int>>v;
        for(int i=0; i<nums.size(); i++){
           mp[nums[i]]++;
           st.insert(nums[i]); 
        }
        for(int x : st){
            v.push_back({mp[x],x});
        }
        sort(v.rbegin(),v.rend());
        vector<int>ans2;
        for(auto &ans: v){
            k--;
            if(k<0)
            break;
            ans2.push_back(ans.second);
        }
        return ans2;
    }
};
