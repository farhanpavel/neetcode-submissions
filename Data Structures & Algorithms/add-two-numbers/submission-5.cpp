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
    ListNode *temp1,*temp2,*head=nullptr,*temp3;
    temp1=l1;
    temp2=l2;
    int ans=0,carry=0;
    while(temp1!=nullptr || temp2!=nullptr || carry>0){
        ListNode *newnode = new ListNode();
        int val1 = temp1 ? temp1->val : 0;
            int val2 = temp2 ? temp2->val : 0;
        ans = val1 + val2 + carry;
        
        if(ans>9){
           carry=ans/10;
           ans=ans%10; 
           newnode->val=ans; 
        }
        else{
            newnode->val=ans;
            carry=0;
        }

        if(head==nullptr){
            head=newnode;
            temp3=newnode;
        }
        else{
            temp3->next=newnode;
            temp3=newnode;
        }
    if(temp1)
        temp1=temp1->next;
    if(temp2)    
        temp2=temp2->next;
        
    }
     if(carry>0){
         ListNode* newnode = new ListNode(carry);
        temp3->next = newnode;
        temp3 = newnode;
        ans = 0; 
     }
    return head;


    }
};
