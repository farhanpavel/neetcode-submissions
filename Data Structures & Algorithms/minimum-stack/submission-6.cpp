class MinStack {
public:
    vector<int>v;
    int value=INT_MAX;
    vector<int>v2;
    
    MinStack() {
        
    }
    
    void push(int val) {
    v.push_back(val);
    if(v2.empty()){
      v2.push_back(val);
    }
    else{
      v2.push_back(min(val,v2.back()));
    }
    }
    
    void pop() {
    v2.pop_back();
    v.pop_back();    
    }
    
    int top() {
    return v.back();    
    }
    
    int getMin() {
    return v2[v2.size()-1];
    }
};
