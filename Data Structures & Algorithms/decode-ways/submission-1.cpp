class Solution {
public:
    int dp(string s ,vector<int>&arr,int i){
    if(i==s.size()) {
    return 1;    
    }
    if((s[i]-'0')==0){
     return 0;   
    }
    if(arr[i]!=-1){
    return arr[i];
    }
    int left = dp(s,arr,i+1);    
    int right =0;
    if(i+1<s.size()){
    if(stoi(s.substr(i,2))>=10 && stoi(s.substr(i,2))<=26){
     right = dp(s,arr,i+2);    
    }
    }
    return arr[i]=left+right;    
    }

    int numDecodings(string s) {
   
    int i=0,j=0;
    vector<int>arr(s.size(),-1);
    return dp(s,arr,i);    
    }
};
