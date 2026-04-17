class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for(int i=0 ;i<matrix.size();i++){
            if(matrix[i][0]<=target && target<=matrix[i][matrix[i].size()-1]){
              return binarySearch(matrix[i],target);      
            }
        }
        return false;


    }
    bool binarySearch(vector<int>&matrix,int target){
        int mid=0,left=0,right=matrix.size()-1;
        while(left<=right){
            mid=(left+right)/2;
            if(matrix[mid]==target){
                return true;
            }
            else if(matrix[mid]< target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }



};
