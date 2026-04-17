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
    int multi=1,ans1=0,ans2=0;
    while(temp1!=nullptr){
      ans1+=(multi*temp1->val); 
      temp1=temp1->next;   
      multi*=10;
    }
    multi=1;
    while(temp2!=nullptr){
      ans2+=(multi*temp2->val); 
      temp2=temp2->next;   
      multi*=10;
    }
    
    int ans=ans1+ans2,ans3=0;
    if(ans==0){
        return l1;
    }
    ListNode *heady=nullptr,*tempy;
    while(ans!=0){ 
     ans3=ans%10;
     ans=ans/10;
    ListNode *newList = new ListNode();
     newList->val=ans3;   
    if(heady==nullptr){
        heady=newList;
        tempy=newList;
    }
    else{
        tempy->next=newList;
        tempy=newList;
    }
    }
    return heady;




    }
};
