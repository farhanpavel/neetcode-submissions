class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
   int mainSize=0;
    
    KthLargest(int k, vector<int>& nums) {
    
    for (int i=0 ;i<nums.size(); i++){
    pq.push(nums[i]);   
    }
    int len=nums.size()-k;
    if(len>0){
    for (int i=0 ;i<len; i++){
    pq.pop();   
    }
    }
      
    mainSize=k;  
    }
    
    int add(int val) {
    pq.push(val);
    if(pq.size()>mainSize)
    {pq.pop();}
    int value=pq.top();
   
    return value;    
    }
};
