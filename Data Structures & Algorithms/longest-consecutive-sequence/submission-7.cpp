class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_map<int,int>mp;
        set<int>st;
        int n=nums.size();
        for(int i=0 ; i<n; i++){
            mp[nums[i]]++;
            st.insert(nums[i]);
        }
        int count=1,value=1;
        sort(nums.begin(),nums.end());
        for(int x:st){
            if(mp.find(x+1)!=mp.end()){
                count++;
                value=max(value,count);
            }
            else{
                count=1;
            }
        }
        return value;
    }
};
