class Solution {
public:
int leastInterval(vector<char>& tasks, int n) {
    map<char,int>mp;
    for(int i=0;i<tasks.size();i++){
    mp[tasks[i]]++;    
    }
    priority_queue<int>pq;
    for(auto [x,y]:mp){
     if(y>0)   
     pq.push(y);   
    }
    int count=0;
    while(!pq.empty()){
    vector<int>store;
    for(int i=0;i<n+1;i++){
    if(!pq.empty()){
    int freq=pq.top();
    freq--;
    pq.pop();
    store.push_back(freq);   
    }
    }
    for(auto x:store){
     if(x>0)
     pq.push(x);   
    }
    if(pq.empty()){
    count+=store.size();    
    }
    else{
     count+=n+1;   
    }
    }
    return count;
    }
};
