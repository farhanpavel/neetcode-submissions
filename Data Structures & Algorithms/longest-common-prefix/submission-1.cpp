class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int i=0,j=0,count=0;
      string ans="";
      while(i<strs[0].size()){
        while( j<strs.size()){
            if(strs[0][i]==strs[j][i]){
                count++;
                if(count==strs.size()){
                    ans+=strs[0][i];
                    break;
                }
            }
            j++;
        }
        if(ans.empty()){
            return ans;
        }
        i++;
        j=0;
        count=0;
      } 
       return ans;
    }
};