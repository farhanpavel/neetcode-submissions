class Solution {
public:
    int bfs( vector<vector<int>>&adj, vector<int>&visited,int node){
    queue<int>q;
    q.push(node);
    visited[node]=1;
    while(!q.empty()){
    int temp = q.front();
    q.pop();
    for(auto x : adj[temp]){
    if(visited[x]==-1){
    q.push(x);
    visited[x]=1;    
    }
    }    
    } 
    for(int i=0;i<visited.size();i++){
    if(visited[i]==-1){
    return 1;    
    }    
    } 
    return 1;      
    }

    int countComponents(int n, vector<vector<int>>& edges) {
 vector<vector<int>>adj(n);
    for(int i=0;i<edges.size();i++){
    adj[edges[i][1]].push_back(edges[i][0]);
    adj[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int>visited(n,-1);
    int count=0;
    for(int i=0 ; i<adj.size() ; i++){
      if(visited[i]==-1){
      int ans = bfs(adj,visited,i);  
      count+=ans;
     }
    }
    return count;
    }
};
