/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {  
public:
    Node* copyRandomList(Node* head) {
    Node *heady=nullptr,*temp,*newnode,*temp3;    

    temp3=head;
    map<Node*,Node*>mp;
    while(head!=nullptr){
     newnode=new Node(head->val);
     newnode->next=nullptr;
     if(heady==nullptr){
       
        heady=newnode;
        temp=newnode; 
    }
    else{
       temp->next=newnode;
       temp=newnode;     
    }
    mp[head]=newnode; 
    head=head->next;  
    }
    Node *temp2;
    temp2=heady;
    while(temp2!=nullptr){
        if(temp3->random==nullptr){
          temp2->random=nullptr;
        }
        else{
        temp2->random=mp[temp3->random];
        }
    temp2=temp2->next;
    temp3=temp3->next;    
    }
    return heady;
    }
};
