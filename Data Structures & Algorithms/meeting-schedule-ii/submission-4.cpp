/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
    vector<int>start,end;
    for(int i=0;i<intervals.size();i++){
    start.push_back(intervals[i].start);
    end.push_back(intervals[i].end);
    }
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());
    int left = 0 ,right = 0,count=0;
    int maxCount=0;
    while(left<start.size() && right<end.size()){
    int value = min(start[left],end[right]);
    if(value==start[left] && start[left]!=end[right]){
    count++;
    left++;    
    }
    else {
    count--;
    right++;    
    }
    maxCount=max(count,maxCount);    
    }
  
    return maxCount;
    
    }
};
