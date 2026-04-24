class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     priority_queue< pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> >pq;
     for(int i=0;i<points.size();i++){
     int num1=points[i][0];
     int num2=points[i][1];
     int ans = num1*num1 + num2*num2;
     pq.push({ans,{num1,num2}}); 
     }
     vector<vector<int>>ans;
     vector<int>v;
     for(int i=0;i<k;i++){
     int num1=pq.top().second.first;
     int num2=pq.top().second.second;
     v.push_back(num1);
     v.push_back(num2);
     ans.push_back(v);
     v.clear();
     pq.pop();
     }
     return ans;
    }
};
