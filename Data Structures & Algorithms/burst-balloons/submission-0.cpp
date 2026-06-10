class Solution {
public:
    int dp(int i,int j,vector<int>&nums,vector<vector<int>>&arr){
     if(i>j){
     return 0;   
     }
     if(arr[i][j]!=-1) return arr[i][j];
     int maxi = INT_MIN;   
     for(int idx=i;idx<=j;idx++){
     int cost = (nums[i-1]*nums[idx]*nums[j+1])
     +dp(i,idx-1,nums,arr)+dp(idx+1,j,nums,arr);
     maxi = max(maxi,cost);
     }

     return arr[i][j] = maxi;   
        
    }


    int maxCoins(vector<int>& nums) {
    int n =nums.size();    
    nums.push_back(1);
    nums.insert(nums.begin(),1);
    vector<vector<int>>arr(nums.size()+1,vector<int>(nums.size()+1,-1));
    return dp(1,n,nums,arr);     
    }
};
