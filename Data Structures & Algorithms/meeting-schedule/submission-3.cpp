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
    bool canAttendMeetings(vector<Interval>& intervals) {
    if(intervals.size()==0){
        return true;
    }
    sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
    return a.start<b.start;    
    });
    int i=1;
    vector<int>newIntervals={intervals[0].start,intervals[0].end};
    while(i<intervals.size()){
    if(newIntervals[1]<=intervals[i].start){
    newIntervals[0]=intervals[i].start;
    newIntervals[1]=intervals[i].end;
    }    
    else{
    return false;   
    }
    i++;    
    }
    return true;       
    }
};
