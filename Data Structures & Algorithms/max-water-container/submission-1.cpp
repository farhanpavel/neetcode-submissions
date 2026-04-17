class Solution {
public:
    int maxArea(vector<int>& heights) {
     int left=0,right=heights.size()-1;
     int ans=0,value=0;   
     while(left<right){
     value=min(heights[left],heights[right])*(right-left);   
    ans=max(value,ans);
     if(heights[left]<=heights[right]){
        left++;
     }   
     else if(heights[left]>heights[right]){
        right--;
     }
     }
     return ans;   
    }
};
