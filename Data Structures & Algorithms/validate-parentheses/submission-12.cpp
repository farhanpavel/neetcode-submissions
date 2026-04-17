class Solution {
public:
    stack<char>st;
    bool isValid(string s) {
    bool flag=false;
    if(s[0]==')' || s[0]=='}' || s[0]==']'){
      return false;
    }
    for(int i=0;i<s.size();i++){
      if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
      flag=true;  
      st.push(s[i]);  
      }
      else if(!st.empty() && st.top()=='{' && s[i]=='}'){
      st.pop();  
      }
      else if(!st.empty() && st.top()=='(' && s[i]==')'){
      st.pop();  
      }
      else if(!st.empty() && st.top()=='[' && s[i]==']'){
      st.pop();  
      }
      else{
        flag=false;
        break;
      }
      
    }  
    if(st.empty() && flag==true){
      return true;
    }  
    return false;
    }
};
