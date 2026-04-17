class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     int left=0,right=0;
     int count=s1.size();
     int n=s2.size();
     map<char,int>mp;
     for(int i=0;i<s1.size();i++){
        mp[s1[i]]++;
     }
     while(right<n){
     if(mp.count(s2[right])){
     mp[s2[right]]--;  
     if(mp[s2[right]]>=0){
       count--;
     }
     }
    if(right-left+1 > s1.size()){
     if(mp.count(s2[left])){
     mp[s2[left]]++;
     if(mp[s2[left]]>0){
     count++;
     }
     }
     left++;  
     }
     if(count==0){
        return true;
     }   
     right++;
     
     }
     return false;   
    }
};
