class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maX=*max_element(piles.begin(),piles.end());
        int ans=0,left=1,right=maX,mid;
        while(left<=right){
         mid=(left+right)/2;
         ans=0;
         for(int i=0;i<piles.size();i++){
          ans+=((piles[i]+mid-1)/mid);
         }
         if(ans>h){
          left=mid+1;
         } 
         else{
          right=mid-1;
         }
        }
        return left;
    }
};
