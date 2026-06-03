class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    vector<int>preSum;
    int sum=0;
    for(int i=0;i<gas.size();i++){
     preSum.push_back((gas[i]-cost[i]));
     sum+=(gas[i]-cost[i]);   
    }
    int value=0,value2=INT_MAX,ans=0;
    for(int i=0;i<preSum.size();i++){
    value+=preSum[i];
    if(value<value2){
    value2=value;
    ans=i;    
    }    
    }
    if(sum < 0) return -1;
    return (ans+1)%preSum.size();
    }
};
