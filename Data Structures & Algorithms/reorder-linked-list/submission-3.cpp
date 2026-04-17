/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
     ListNode *fast,*slow;
     slow=head;
     fast=head->next;
     while(fast!=nullptr && fast->next!=nullptr){
      slow=slow->next;
      fast=fast->next->next;  
     }
     ListNode *temp5;
     temp5=slow;
     slow=slow->next;
     temp5->next=nullptr;
     ListNode *prev,*nexty,*current;
     prev=nullptr;
     nexty=slow;
     current=slow;
     while(nexty!=nullptr){
      nexty=nexty->next;
      current->next=prev;
      prev=current;
      current=nexty;  
     }    
     ListNode *prev1,*prev2,*temp1,*temp2;
     temp1=head;
     temp2=prev;

     while(temp2!=nullptr){
     prev1=temp1->next;
     prev2=temp2->next;
     temp1->next=temp2;
     temp2->next=prev1;   
     temp1=prev1;
     temp2=prev2;  
     }
       
    }
};
