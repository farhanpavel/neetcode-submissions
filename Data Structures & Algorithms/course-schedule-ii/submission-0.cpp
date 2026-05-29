class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adj(numCourses);
    for(int i=0;i<prerequisites.size();i++){
    adj[prerequisites[i][1]].push_back(prerequisites[i][0]);   
    }
    
    
    
    vector<int>counter(numCourses ,0);
    for(int i=0 ; i<adj.size();i++){
    for(auto x : adj[i]){
    counter[x]++;      
    }
    } 
    queue<int>q;
    for(int i=0;i<counter.size();i++){
        if(counter[i]==0){
        q.push(i);    
        }
    }
    vector<int>ans;
    int count=0;
    while(!q.empty()){
    int temp = q.front();
    count++;
    q.pop();
    ans.push_back(temp);
    for(auto x : adj[temp]){
    counter[x]--;
    if(counter[x]==0) q.push(x);    
    }    
    }
   // cout<<count<<endl;
    if(count== numCourses) return ans;
    return {};   
       
    }
};
