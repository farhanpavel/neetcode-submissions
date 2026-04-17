class MyHashSet {
public:
   vector<int>v;
    MyHashSet() {
     
    }
    
    void add(int key) {
        if(!contains(key))
        v.push_back(key);
    }
    
    void remove(int key) {
        auto it=find(v.begin(),v.end(),key);
        if(it != v.end()){
            v.erase(it);
        }
    }
    
    bool contains(int key) {
          return find(v.begin(), v.end(), key) != v.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */