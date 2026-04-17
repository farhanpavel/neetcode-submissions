class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int value=0;
        int count=1;
        if(nums.size()==0){
            return 0;
        }

        for(int i=0 ; i<nums.size() ; i++){
            if( i+1<nums.size() && (nums[i+1]-nums[i]==1)){
                count++;
            }
            else if( i+1<nums.size() && nums[i+1]!=nums[i]){
                value=max(value,count);
                count=1;
            }
            
        }
        value=max(value,count);
         
        return value;
    }
};
