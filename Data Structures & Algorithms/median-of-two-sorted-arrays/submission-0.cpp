class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int>v;
      v.insert(v.end(),nums1.begin(),nums1.end());
      v.insert(v.end(),nums2.begin(),nums2.end());
      sort(v.begin(),v.end());
      double ans=0;
      int value,value2;
      if(v.size()%2!=0){
      value= (v.size()+1)/2.0;
      ans=v[value-1];
      }
      else{
        value=(v.size())/2.0;
        value2=(v.size())/2.0 +1;
        value--;
        value2--;
        ans=(v[value]+v[value2])/2.0;
      }
      return ans;
        
    }
};
