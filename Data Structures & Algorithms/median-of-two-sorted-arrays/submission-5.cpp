class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int i=0,j=0,index1=0,index2=0,ans1=0,ans2=0,count=0;
      int totalSize=nums1.size()+nums2.size();
      if(totalSize%2==0){
        index1=(totalSize)/2;
        index2=(totalSize)/2+1;
        index1--;
        index2--;
      } 
      else{
        index1=(totalSize+1)/2-1;
      } 
     while (i < nums1.size() && j < nums2.size()) {
     if(nums1[i]<=nums2[j]){
      if(count==index1){
        ans1=nums1[i];
      }
      else if(count==index2 && totalSize%2==0 ){
        ans2=nums1[i];
      }
      count++;
      i++;
     }
     else{
      if(count==index1){
        ans1=nums2[j];
      }
      else if(count==index2 && totalSize%2==0 ){
        ans2=nums2[j];
      }
      count++;
      j++;
     }
 }
   while(i<nums1.size()){
    
     if(count==index1){
        ans1=nums1[i];
      }
      else if(count==index2 && totalSize%2==0 ){
        ans2=nums1[i];
      }
      i++;
      count++;
   } 
     while(j<nums2.size()){
    
     if(count==index1){
        ans1=nums2[j];
      }
      else if(count==index2 && totalSize%2==0 ){
        ans2=nums2[j];
      }
      j++;
      count++;
   }   
      double ans=0;
      if(totalSize%2!=0){
       ans=ans1; 
      }
      else{
        ans=(ans1+ans2)/2.0;
      }
      return ans;
    }
};
