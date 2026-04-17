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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *temp;
    temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    count=count-n;
    if(count==0){
    ListNode *temp3;
    temp3=head;
    if(temp3->next !=nullptr){
    return temp3->next;
    }else{
     return nullptr;   
    }    
    }
    temp=head;
    while(--count){
        temp=temp->next;
    }
    ListNode *temp2;
    temp2=temp->next;
    temp->next=temp2->next;
    delete temp2;
    return head;
    }
   
};
