class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
     int p=position.size()-1,s=speed.size()-1;
     vector<pair<int,int>>pr;
     for(int i=0;i<=p;i++){
     pr.push_back({position[i],speed[i]});
     }
     sort(pr.begin(),pr.end());
     vector<float>v;
     for(auto x : pr){
     float ans=((float)(target-x.first)/(float)(x.second));
     v.push_back(ans);   
     }
     int right=v.size()-1;
     stack<float>st;
     while(right>=0){
        if(st.empty() || st.top()<v[right]){
            st.push(v[right]);
        }
        right--;
     }
     return st.size();   
    
    
    }
};
