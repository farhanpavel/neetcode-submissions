class Solution {
public:
    string store[8]={
     "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"   
    };
    vector<string>ans;
    void backtrack(string digits,string arr,int idx){
    if(digits.size()==0){
        return;
    }    
    if(idx==digits.size()){
    ans.push_back(arr);
    return ;    
    }    

    int temp=(digits[idx]-'0')-2;
    for(int j=0;j<store[temp].size();j++){
    arr+=store[temp][j];
    backtrack(digits,arr,idx+1);//a 
    arr.pop_back();   
    }    
    
    }


    vector<string> letterCombinations(string digits) {
    string arr="";
    int idx=0;
    backtrack(digits,arr,idx); 
    return ans;
    }
};
