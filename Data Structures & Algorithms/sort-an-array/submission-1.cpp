class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    int minElm=*min_element(nums.begin(),nums.end());    
    if(minElm<0){
        for(int &x : nums){
         x-=minElm;   
        }
    }
    int maxElm=*max_element(nums.begin(),nums.end());
    for(int exp=1; (maxElm/exp) > 0 ; exp*=10){
    vector<int>c(10,0);
    for(int i=0;i<nums.size();i++){
        int x=(nums[i]/exp)%10;
        c[x]++;
    }
    for(int i=1;i<10;i++){
        c[i]=c[i]+c[i-1];
    }
    vector<int>ans(nums.size());
    for(int i=nums.size()-1 ;i>=0 ;i--){
        int x=(nums[i]/exp)%10;
        ans[--c[x]]=nums[i]; 
    }
    nums=ans;

    } 
    if(minElm<0){
        for(int &x : nums){
         x+=minElm;   
        }
    }       
 return nums;



    }
};