class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int left=0,right=numbers.size()-1;
       vector<int>v;
       while(left<right){
        if(numbers[left]+numbers[right]==target){
            v.push_back(left+1);
            v.push_back(right+1);
            return v;
        }
        else if(numbers[left]+numbers[right]>target){
            right--;
        }
        else if(numbers[left]+numbers[right]<target){
            left++;
        }
       }
       return v; 
    }
};
