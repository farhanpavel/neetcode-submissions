class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int,int>mp;
    priority_queue<pair<int,int>>pq;
    set<int>st;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        st.insert(nums[i]);
    } 
    for(auto x: st){
     pq.push({mp[x],x});    
    }
    vector<int>ans;   
    while(!pq.empty()){
    ans.push_back(pq.top().second);
    pq.pop();
    k--;
    if(k==0) break;    
    }
    return ans;
    }
};
