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
    Node *temp,*temp2,*newHead=nullptr;
  
    map<Node*,Node*>mp1;
    temp=head; 
    while(temp !=nullptr){
    Node *newnode = new Node(temp->val);
    mp1[temp]=newnode;
    if(newHead==nullptr){
    newHead=newnode;
    temp2=newnode;
    }else{
    temp2->next=newnode;
    temp2=newnode;    
    }
    temp=temp->next;   
    }
    temp=head;
    Node *temp3;
    temp3=newHead;
    while(temp3!=nullptr){
    temp3->random=mp1[temp->random];
    temp3=temp3->next;
    temp=temp->next;    
    }
    return newHead;
       
    }
};
