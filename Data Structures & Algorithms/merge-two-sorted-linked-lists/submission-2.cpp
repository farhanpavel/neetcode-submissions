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
     ListNode *temp1,*temp2,*head=nullptr,*temp3;
     temp1=list1;
     temp2=list2;   
    while(temp1!=nullptr || temp2!=nullptr) {
    ListNode *newnode = new ListNode();
    if(temp1!=nullptr && temp2!=nullptr && temp1->val<temp2->val){
    if(temp1!=nullptr)  
    {
     newnode->val=temp1->val;      
     temp1=temp1->next;   
    }else{
       newnode->val=temp2->val;      
     temp2=temp2->next;   
        
    }
    }
    else{
        
    if(temp2 !=nullptr)
    {
    newnode->val=temp2->val;      
    temp2=temp2->next;       
    }
    else{
    newnode->val=temp1->val;      
    temp1=temp1->next;
    }
    }  
    if(head==nullptr){
        
    head=newnode;
    temp3=newnode;  
    }
    else{
        temp3->next=newnode;
        temp3=newnode;
    }
        
     } 
     return head; 
    }
};
