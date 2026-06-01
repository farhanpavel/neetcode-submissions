class Solution {
   public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>>ans;
       sort(intervals.begin(),intervals.end());
       vector<int>newInterval={intervals[0][0],intervals[0][1]};
       int i=1;
       while(i<intervals.size()){
       if(newInterval[1]<intervals[i][0]){
       ans.push_back(newInterval);
       newInterval[0]=intervals[i][0];
       newInterval[1]=intervals[i][1]; 
       }
       else{
       newInterval[0]=min(newInterval[0],intervals[i][0]);
       newInterval[1]=max(newInterval[1],intervals[i][1]);
       }
       i++; 
       }
       ans.push_back(newInterval);
       return ans;
    }
};
