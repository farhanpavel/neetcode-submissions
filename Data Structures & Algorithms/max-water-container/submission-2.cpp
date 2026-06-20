class Solution {
public:
    int maxArea(vector<int>& heights) {
    int left=0,right=heights.size()-1;
    int ans=INT_MIN;
    while(left<right){
    int value = (right-left)*min(heights[left],heights[right]);
    ans=max(value,ans);
    if(heights[left]<heights[right]){
      left++;
    }  
    else{
      right--;
    }
    }
    return ans;    
    }
};
