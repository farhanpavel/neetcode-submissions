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
      ListNode *temp,*temp2,*prev,*nexty,*current;
      temp=head;
     int count=0;
      while(temp!=nullptr){
        temp=temp->next;
        count++;
      }
      if(count==1){
        return;
      }
      temp=head;
      int half=(count+1)/2-1;
      while(temp!=nullptr){
        temp=temp->next;
        half--;
        if(half==0){
        current=temp->next;
        nexty=temp->next;
        prev=nullptr;
        while(nexty != nullptr){
          nexty=nexty->next;
          current->next=prev;
          prev=current;
          current=nexty;
        }
        temp->next=prev;
        break;
        }
      }
      temp2=head;
      ListNode *store1,*store2,*store3;
      store3=temp;
      temp=temp->next;
      
      while(temp!=nullptr && temp2!=nullptr){
      store1=temp2->next; //200  
      store2=temp->next; //400
      temp2->next=temp;
      temp->next=store1;// 100->200= 500
      temp2=store1;
      temp=store2;
      if(store1==store3){
        store3->next=nullptr;
      }
      }
    

    }
};
