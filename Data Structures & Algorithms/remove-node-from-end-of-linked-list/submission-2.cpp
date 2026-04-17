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
    ListNode *temp,*prev;
    temp=head;
    int count=0;
    while(temp!=nullptr){
        temp=temp->next;
        count++;
    }
    temp=head;
   
    int check=count-n+1;
    int i=1;
    if(temp->next == nullptr){
    delete temp;
    return nullptr;
    }
    while(i<check){
        prev=temp;
        temp=temp->next;
        i++;
    }
    if(check==1){
     prev=head;
     head=head->next;   
     delete prev;  
     return head;  
    }
    prev->next=temp->next;
    delete(temp);
    return head;
    }
 
};
