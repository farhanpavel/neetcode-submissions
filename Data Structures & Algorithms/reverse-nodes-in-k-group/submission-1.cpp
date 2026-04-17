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
    ListNode* reverseKGroup(ListNode* head, int k) {
     ListNode *temp;
     temp=head;
     ListNode *mainHead,*nexty,*prev,*current,*temp3;
     nexty=head;
     prev=nullptr;
     current=head;
     bool flag=true,flag2=true;
     while(temp!=nullptr){
     int count=k; 
     temp3=nexty;
     while(count-- && nexty!=nullptr){
      nexty=nexty->next;
      current->next=prev;
      prev=current;
      current=nexty;
     }
     if(flag==true){
      mainHead=prev;
      flag=false;
     } 
     ListNode *temp2;
     temp2=nexty;
     int count2=1;
     while(count2<k){
     count2++; 
     if(temp2)
     temp2=temp2->next;
     if(temp2==nullptr){
      flag2=false;
      break;
     }
     }
     if(flag2==false){
      temp3->next=nexty;
      break;
     }
     temp3->next=temp2; 
     temp=nexty;
     }
     return mainHead;   
    }
};
