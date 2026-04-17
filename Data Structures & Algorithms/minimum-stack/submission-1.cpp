class MinStack {
public:
vector<int>v;
    MinStack() {
        
    }
    
    void push(int val) {
    v.push_back(val);        
    }
    
    void pop() {
    v.pop_back();    
    }
    
    int top() {
    return v[v.size()-1];    
    }
    
    int getMin() {
    int min=*min_element(v.begin(),v.end());  
    return min;       
    }
};
