class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>st;
    int value=0;
    for(int i=0;i<tokens.size();i++){

    if(tokens[i]=="+")  
    {
    int num1 = st.top();
    st.pop();
    int num2 = st.top();
    st.pop();
    value=(num1+num2);
    st.push(value);
    }
    else if(tokens[i]=="-")  
    {
    int num1 = st.top();
    st.pop();
    int num2 = st.top();
    st.pop();
    value=(num2-num1);
    st.push(value);
    }
    else if(tokens[i]=="*")  
    {
    int num1 = st.top();
    st.pop();
    int num2 = st.top();
    st.pop();
    value=(num1*num2);
    st.push(value);
    }
    else if(tokens[i]=="/")  
    {
    int num1 = st.top();
    st.pop();
    int num2 = st.top();
    st.pop();
    value=(num2/num1);
    st.push(value);
    }
    else{
    st.push(stoi(tokens[i]));  
    }
    }
    return st.top();    
    }
};
