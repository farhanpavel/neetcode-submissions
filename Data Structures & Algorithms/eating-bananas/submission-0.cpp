class Solution {
public:
    int steps(int pile, int k) {
    return (pile + k - 1) / k;  // ceil division
}

    int minEatingSpeed(vector<int>& piles, int h) {        
        int maxVal=*max_element(piles.begin(),piles.end());
        int ans=0,value=0,flag=0;
        for(int i=1 ; i<=maxVal; i++){
            for(int j=0;j<piles.size();j++){
                ans+=steps(piles[j],i);
                if(ans>h){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }
            ans=0;
            flag=0;
        }
        return ans;
    }
};
