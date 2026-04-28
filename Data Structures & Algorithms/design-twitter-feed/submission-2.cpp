class Twitter {
public:
    map<int,vector<pair<int,int>>>mp;
    map<int,set<int>>comb;
    int count=0;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
    count++;    
    mp[userId].push_back({tweetId,count});    
    }
    
    vector<int> getNewsFeed(int userId) {
    priority_queue<pair<int,int>>pq;
    auto v2=mp[userId];
    for(auto &x:v2){
    pq.push({x.second,x.first});    
    }    
    auto v1=comb[userId]; 
    for(int combIdx :v1){
    auto v2=mp[combIdx];
    for(auto &x:v2){
    pq.push({x.second,x.first});    
    }    
    }
    vector<int>ans;
    int i=0;
    while(!pq.empty()){
    i++;
    ans.push_back(pq.top().second);
    pq.pop();
    if(i==10){
      break;  
    }
    }
    return ans; 
    }
    
    void follow(int followerId, int followeeId) {
    if(followerId !=followeeId)    
    comb[followerId].insert(followeeId);    
    }
    
    void unfollow(int followerId, int followeeId) {
    comb[followerId].erase(followeeId);    
    }
};
