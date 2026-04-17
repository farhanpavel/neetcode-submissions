class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    map<int,int>mp;
    set<int>st;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    int count=1,ans=INT_MIN;
    for(int x:st){
    ans=max(ans,count);  
    if(mp.count(x-1)){
        count++;
    }
    else{
        count=1;
    }
    mp[x]++; 
    
    }
    if(nums.size()==0) return 0;
    ans=max(ans,count);
    return ans;    
    }
};
