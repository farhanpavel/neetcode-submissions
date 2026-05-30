class DSU{
vector<int>parent;
vector<int>rank;
public:
 DSU(int n){
 parent.resize(n+1);
 rank.resize(n+1,0);
 for(int i=0;i<n;i++){
 parent[i]=i;
 }  
}
int find(int node){
if(node==parent[node]) return node;
return parent[node]=find(parent[node]);    
}
bool unionCreat(int u,int v){
int ultm_par1 = find(u);
int ultm_par2 = find(v);
if(ultm_par1==ultm_par2) return true;
if(rank[ultm_par1]>rank[ultm_par2]){
parent[ultm_par2] = ultm_par1 ;   
}
else if(rank[ultm_par1]<rank[ultm_par2]){
parent[ultm_par1] = ultm_par2 ;   
}
else{
parent[ultm_par1] = ultm_par2 ;       
rank[ultm_par2]++;
}
return false;
}
};


class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    DSU ds(edges.size());
    for(int i=0;i<edges.size();i++){
    int first = edges[i][0];
    int second = edges[i][1];
    bool ans = ds.unionCreat(first,second);
    if(ans==true){
    return {first,second};    
    }
        
    }        
    }
};
