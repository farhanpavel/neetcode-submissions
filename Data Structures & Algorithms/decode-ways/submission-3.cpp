class Solution {
public:
    int dp(string s,int idx,vector<int>&arr){
    if(idx==s.size()) return 1;
    if((s[idx]-'0')==0) return 0;
    if(arr[idx]!=-1){return arr[idx];}    
    int left = dp(s,idx+1,arr);        
    int right=0;
    if(stoi(s.substr(idx,2))>=10 && stoi(s.substr(idx,2))<=26){
    right = dp(s,idx+2,arr);        
    }
    return arr[idx]=left+right;
   
    }

    int numDecodings(string s) {
    int idx=0;
   vector<int>arr(s.size(),-1);
    return dp(s,idx,arr);    
    }
};
