class Solution {
public:
    bool binarySearch(vector<int>&v,int x){
       int left=0,right=v.size()-1,mid=0;
       while(left<=right){
        mid=(left+right)/2;
        if(v[mid]==x){
            return true;
        }
        else if(v[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
       }
       return false; 
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]<=target && target<=matrix[i][matrix[i].size()-1]){
            return binarySearch(matrix[i],target);    
            }
        }
    }
    return false;    
    }
};
