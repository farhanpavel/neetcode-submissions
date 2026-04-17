class Solution {
public:
   

    int minEatingSpeed(vector<int>& piles, int h) {        
        int maxVal=*max_element(piles.begin(),piles.end());
        int left=1,right=maxVal,mid=0,ans=0,ansMain=maxVal;
        while(left<=right){
          mid=(left+right)/2;
          for(int i=0;i<piles.size();i++){
            ans+=(piles[i] + mid - 1) / mid;
          }
          if(ans<=h){
            ansMain=mid;
            right=mid-1;
          }
          else{
            left=mid+1;
          }
          ans=0;
        }
        return ansMain;
    }
};
