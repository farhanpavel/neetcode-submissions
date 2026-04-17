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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     vector<int>ans;
     ListNode *head=nullptr,*temp2;
     for(int i=0;i<lists.size();i++){
      ListNode *temp=lists[i];
      while(temp!=nullptr){
      ans.push_back(temp->val);
      temp=temp->next;  
      }  
     }
     sort(ans.begin(),ans.end());
     for(int i=0;i<ans.size();i++){
     ListNode *newnode = new ListNode();
     newnode->val=ans[i];
     if(head==nullptr){
      head=newnode;
      temp2=newnode;  
     }
     else{
        temp2->next=newnode;
        temp2=newnode;
     }   
     }
     return head;   
    }
};
