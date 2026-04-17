class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack<int>st;
     int ans=0;
     for(int i=0;i<tokens.size();i++){
      if(tokens[i] =="+"){
      int first=(st.top());
      st.pop();
      int second=(st.top());
      st.pop();
      ans=first+second;
      st.push((ans));
      }
     else if(tokens[i]=="-"){
      int first=(st.top());
      st.pop();
      int second=(st.top());
      st.pop();
       ans=second-first;
      st.push((ans));
      }
      else if(tokens[i]=="*"){
      int first=(st.top());
      st.pop();
      int second=(st.top());
      st.pop();
    ans=first*second;
      st.push((ans));
      }
      else if(tokens[i]=="/"){
      int first=(st.top());
      st.pop();
      int second=(st.top());
      st.pop();
      ans=second/first;
      st.push((ans));
      }
      else{
        st.push(stoi(tokens[i]));
      }  
     }
     return st.top();   
    }
};
