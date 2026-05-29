class Solution {
public:
    bool bfs( vector<vector<int>>&adj, vector<int>&visited,int node){
    queue<pair<int,int>>q;
    q.push({node,-1});
    visited[node]=1;
    while(!q.empty()){
    int temp = q.front().first;
    int parent = q.front().second;
    q.pop();
    for(auto x : adj[temp]){
    if(visited[x]==-1){
    q.push({x,temp});
    visited[x]=1;    
    }
    else if(parent != x){
    return false;    
    }    
    }    
    } 
    for(int i=0;i<visited.size();i++){
    if(visited[i]==-1){
    return false;    
    }    
    } 
    return true;      
    }

    bool validTree(int n, vector<vector<int>>& edges) {
    vector<vector<int>>adj(n);
    for(int i=0;i<edges.size();i++){
    adj[edges[i][1]].push_back(edges[i][0]);
    adj[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int>visited(n,-1);
    for(int i=0 ; i<adj.size() ; i++){
      if(visited[i]==-1){
      bool ans = bfs(adj,visited,i);  
      if(ans == false) return false;
     }
    }
    return true;
    

    }
};
