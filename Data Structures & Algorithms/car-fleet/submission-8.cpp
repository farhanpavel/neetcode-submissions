class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       vector<pair<int,int>>v;
       for(int i=0;i<position.size();i++){
        v.push_back({position[i],speed[i]});
       }
       sort(v.rbegin(),v.rend());
       stack<double>st;
       bool flag=false;
       int count=0;
       for(int i=0;i<v.size();i++){
       double ans = (double)((target-v[i].first)/(double)(v[i].second));
       while(!st.empty() && st.top()<ans){
        st.pop();
        flag=true;
       }
       if(st.empty() || st.top()<ans) 
       {st.push(ans);}
       if(flag==true){
        count++;
       }
       flag=false;
       }
       if(st.empty()){
        return count;
       }
       return count+1;  
    }
};
