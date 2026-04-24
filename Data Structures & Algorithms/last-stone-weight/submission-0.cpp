class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
    priority_queue<int>pq;
    for(int i=0;i<stones.size();i++){
    pq.push(stones[i]);
    } 
    while(pq.size()>1){
    int num1=pq.top();
    pq.pop();
    int num2=pq.top();    
    pq.pop();
    int num3=abs(num1-num2);
    pq.push(num3);
    }
    if(pq.empty()){
        return 0;
    } 
    else{
        return pq.top();
    }  
    }
};
