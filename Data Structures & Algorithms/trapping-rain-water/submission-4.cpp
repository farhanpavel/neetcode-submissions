class Solution {
public:
    int trap(vector<int>& height) {
     int n=height.size();   
     int maxL=height[0],maxR=height[n-1],ans=0;
     int left=0,right=n-1;
     while(left<right){
        if(maxL<maxR){
        left++;
        maxL=max(height[left],maxL);
        ans+=(maxL-height[left]);
        }else{
        right--;
        maxR=max(height[right],maxR);
        ans+=(maxR-height[right]);
        }
     }
     return ans;   
    }
};
