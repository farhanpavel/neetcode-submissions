class Solution {
public:
    vector<vector<string>>ans;
    bool findPalindrome(string check){
    string temp2=check;
    reverse(temp2.begin(),temp2.end());
    if(temp2==check){
    return true;    
    }     
    return false;
    }
    void backtrack(string s,vector<string>&arr){
    if(s.size()==0){
    ans.push_back(arr);
    return;
    }
    
    for(int i=0;i<s.size();i++){
    string temp = s.substr(0, i+1);
    if(findPalindrome(temp)){
    arr.push_back(temp);
    backtrack(s.substr(i+1,s.size()),arr);    
    arr.pop_back(); 
    }
    }

    }


    vector<vector<string>> partition(string s) {
     int idx=0;
     vector<string>arr;
     backtrack(s,arr);
     return ans;   
    }
};
