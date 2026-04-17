class Solution {
public:
    int trap(vector<int>& height) {
      int ans=0,left=0,right=height.size()-1;
      int maxL=height[0],maxR=height[right];   
      while(left<right){
       if(maxL<maxR){
        left++;
        maxL=max(maxL,height[left]);
        ans+=(maxL-height[left]);
        }
       else{
        right--;
        maxR=max(maxR,height[right]);
        ans+=(maxR-height[right]);
        }

      }
      return ans;
    }
};
