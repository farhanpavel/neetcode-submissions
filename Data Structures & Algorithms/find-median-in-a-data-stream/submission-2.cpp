class MedianFinder {
public:
    priority_queue<int,vector<int>,greater<int>>minHeap;
    priority_queue<int>maxHeap;
   
    MedianFinder() {
    }
    
    void addNum(int num) {
    //first push in maxHeap
    maxHeap.push(num);
    // second remove from maxHeap push in meanHeap
    //remember it is always not that if you push 3 in max but in the top it will be 3
    minHeap.push(maxHeap.top());
    maxHeap.pop();
    if(maxHeap.size()<minHeap.size()){
    //here also when you pop it is always not the same as 
    //suppose you have push 3 but pop will be 2
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


