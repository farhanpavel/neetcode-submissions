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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp1,*temp2,*head=nullptr,*temp3;
        temp1=list1;
        temp2=list2;       
        while(temp1!=nullptr || temp2!=nullptr){
          if((temp1==nullptr) || (temp2!=nullptr && temp1->val>=temp2->val)){
            if(head==nullptr){
              head=temp2;
              temp3=temp2;  
            }
            else{
                temp3->next=temp2;
                temp3=temp2;
            }
            temp2=temp2->next;
            
          }
          else{
            if(head==nullptr){
              head=temp1;
              temp3=temp1;  
            }
            else{
                temp3->next=temp1;
                temp3=temp1;
            }
            temp1=temp1->next;
          }  
        }
        return head;
    }
};
