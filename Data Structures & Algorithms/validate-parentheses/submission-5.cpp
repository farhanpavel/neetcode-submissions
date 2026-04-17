class Solution {
public:
    bool isValid(string s) {
      int n=s.size();
      int flag=0;
      stack<char>st;
      if(s[0]==')' || s[0]==']' || s[0]=='}'){
        return false;
      }
      for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(!st.empty() && ((s[i]==')' && st.top()=='(')|| (s[i]=='}' && st.top()=='{')|| (s[i]==']' && st.top()=='[') )){

            st.pop();
        }
        else{
            return false;
        }
      }
      if(st.empty())
      return true;

    return false;
    
    }
};
