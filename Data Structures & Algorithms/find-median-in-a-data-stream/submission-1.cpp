class MedianFinder {
public:
    priority_queue<int,vector<int>,greater<int>>minHeap;
    priority_queue<int>maxHeap;
   
    MedianFinder() {
    }
    
    void addNum(int num) {
    maxHeap.push(num);

    minHeap.push(maxHeap.top());
    maxHeap.pop();
    if(maxHeap.size()<minHeap.size()){
    maxHeap.push(minHeap.top());
    minHeap.pop();  
    } 
    }
    
    double findMedian() {
    if(maxHeap.size()==minHeap.size())
    {
     return (double)((maxHeap.top()+minHeap.top())/2.0); 
    }
    else if(maxHeap.size()>minHeap.size()){
      return maxHeap.top();
    } 
   
    }
};

/*
  int value = pq.size();
    double num1=0,num2=0;
    if(value%2!=0){
    int value2=value/2;
    int i=0;
    while(i<=value2){
    num1=pq.top();
    pq.pop();
    i++;    
    }    
    }
    else{
    int value2=value/2;
    int i=0;
    while(i<=value2){
    num1=pq.top();
    pq.pop();
    num2=pq.top();
    i++;    
    }    
    } 
    double ans;
    ans=(num1+num2)/2;
    return ans;

*/
