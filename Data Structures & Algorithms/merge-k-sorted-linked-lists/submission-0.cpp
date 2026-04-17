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
      vector<int>v;
      for(int i=0;i<lists.size();i++){
        ListNode *temp;
        temp=lists[i];
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
      }
      ListNode *head=nullptr,*newnode,*temp2;
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
      newnode = new ListNode();
      newnode->val=v[i];
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
