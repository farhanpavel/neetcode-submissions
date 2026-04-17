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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *temp1,*temp2;
    temp1=l1;
    temp2=l2;
    int ans=1,value=10,carry=0;
    ListNode *head=nullptr,*temp4;
    while(temp1!=nullptr || temp2!=nullptr || carry>0){
    ListNode *newnode = new ListNode();
    int val1= temp1 ? temp1->val : 0;
    int val2= temp2 ? temp2->val : 0;
    int multi = val1 + val2 + carry;
    if(multi<=9){
    newnode->val=multi;
    carry=0;
    }
    else{
    ans=(multi % 10);
    newnode->val=ans;
    carry = multi / 10;     
    }
    if(head==nullptr){
    head=newnode;
    temp4=newnode;
    }
    else{
     temp4->next=newnode;
     temp4=newnode;       
    }
    if(temp1){
     temp1=temp1->next;   
    }  
    if(temp2){
        temp2=temp2->next;
    }
    }    
    return head;
    }
};
