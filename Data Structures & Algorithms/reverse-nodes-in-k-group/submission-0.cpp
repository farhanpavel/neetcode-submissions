/** * Definition for singly-linked list. * struct ListNode { * int val; *
 * ListNode *next; * ListNode() : val(0), next(nullptr) {} * ListNode(int x) :
 * val(x), next(nullptr) {} * ListNode(int x, ListNode *next) : val(x),
 * next(next) {} * }; */
class Solution {
 public:
  ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode *nexty,*newHead=nullptr, *current, *prev, *temp = nullptr, *temp2,*temp3,*store1,*store2;
    int flag=0;
    nexty = head;
    current = head;
    prev = nullptr;
    int count=0,count2=1;
    while (nexty != nullptr) {
    if(count==0){
        temp3=current;
     }   
     nexty=nexty->next;
     current->next=prev;
     prev=current;
     current=nexty;
     count++;
     if(count==k){

      temp=current;
      
     if(!newHead) newHead = prev;

     
      if(temp){
        while(count2<k){
            temp=temp->next;
            count2++;
            if(temp==nullptr)
            {
                flag=1;
                break;
            }
            
            
        }
      }
      
        if(flag==0){
            temp3->next=temp;
            prev=nullptr;
        }
        
        if(flag==1){
            store1=current;
            store2=temp3;
            break;
        }
        
       // temp3->next=current;
        count2=1; 
        count=0;
     }
    
     
    }
    if(flag==1){
        store2->next=store1;
    }
    return newHead;
  }
};