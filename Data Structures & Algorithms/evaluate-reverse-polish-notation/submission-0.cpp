class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack<int>st;
     int first=0,second=0;
     for(int i=0;i<tokens.size();i++){
      if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
        st.push(stoi(tokens[i]));
     }
      else{
        first=st.top();
        st.pop();
        second=st.top();
        st.pop();
        int ans=0;
        if(tokens[i]=="+"){
         ans=second+first;   
        }
        else if(tokens[i]=="-"){
         ans=second-first;   
        }
        else if(tokens[i]=="*"){
         ans=second*first;        
        }
        else if(tokens[i]=="/"){
            ans=second/first;
        }
        st.push(ans);     
      }  
     }
     return st.top();   
    }
};
