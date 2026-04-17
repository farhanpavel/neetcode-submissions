class TimeMap {
public:
    map<string,vector<pair<string,int>>>mp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
       mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        auto& values=mp[key];
        string result="";
        int mid,left=0,right=values.size()-1;
        while(left<=right){
          mid=(left+right)/2;
          if(values[mid].second<=timestamp){
            result=values[mid].first;
            left=mid+1;
          }
          else{
            right=mid-1;
          }
        }
        return result;
    }
};
