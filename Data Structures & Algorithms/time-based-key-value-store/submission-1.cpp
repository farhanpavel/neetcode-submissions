class TimeMap {
public:
    map<string,vector<pair<string,int>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
     mp[key].push_back({value,timestamp});          
    }
    
    string get(string key, int timestamp) {
    auto &value = mp[key];
    string ans="";
    int left=0,right=value.size()-1,mid;
    while(left<=right){
      mid=(left+right)/2;
      if(value[mid].second<=timestamp){
        ans=value[mid].first;
        left=mid+1;
      }
      else{
        right=mid-1;
      }
    }
    return ans; 
    }
};
