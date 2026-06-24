class MinStack {
public:
  stack<int>st;
  vector<int>v;
  int value = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
    st.push(val);  
    if(v.empty()){
    v.push_back(val);    
    }
    else{
    v.push_back(min(val,v[v.size()-1])); 
    }
    }
    
    void pop() {
    st.pop();    
    v.pop_back();
    }
    
    int top() {
    return st.top();    
    }
    
    int getMin() {
    return v[v.size()-1];    
    }
};
