class MinStack {
public:
    vector<int>v;
    int value=0;
    MinStack() {
        
    }
    
    void push(int val) {
    v.push_back(val);    
    }
    
    void pop() {
    v.pop_back();    
    }
    
    int top() {
    return v.back();    
    }
    
    int getMin() {
    value=*min_element(v.begin(),v.end());
    return value;    
    }
};
