class Solution {
public:
    bool isHappy(int n) {
    string number = to_string(n);
    map<int,int>mp;
    int ans=0;
    while(number!="1"){
    for(int i=0;i<number.size();i++){
    int store = (number[i]-'0');
    ans+=(store*store);
    }
    if(mp.find(ans)==mp.end()){
    mp[ans]++;       
    }
    else{
    return false;
    }
    number=to_string(ans);
    ans=0;
    }
     return true;   
    }
};
