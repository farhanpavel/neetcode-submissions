class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    sort(piles.begin(),piles.end());
    int maxVal=piles[piles.size()-1];
    int left=1,right=maxVal,mid=0,value=0,ans=0;
    while(left<=right){
    mid=(left+right)/2;
    for(int i=0;i<piles.size();i++){
    value+=(((piles[i]+mid-1)/mid));    
    }
    if(value>h){
     left=mid+1;   
    }
    else{
    right=mid-1;
    }
    value=0;    
    }  
    return left;                                                                                                                                                         
    }
};
