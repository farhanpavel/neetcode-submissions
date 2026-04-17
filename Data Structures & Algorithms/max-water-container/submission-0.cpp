class Solution {
public:
    int maxArea(vector<int>& heights) {
     int n=heights.size();
     int value=0,left=0,right=n-1;
    while(left<right){
     value=max(value,(right-left)*min(heights[left],heights[right]));
     if(heights[left]<=heights[right]){
        left++;
     }
     else if(heights[left]>heights[right])   
    {
        right--;
    }
    }
    return value;
    }
};
