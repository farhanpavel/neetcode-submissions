struct Node
{
 Node *next;
 Node *prev;
 int key;
 int val;   
};
class LRUCache {
public:
    map<int,Node*>mp;
    int len;
    Node *head=nullptr,*tail;
    LRUCache(int capacity) {
    len=capacity;    
    }
    
    int get(int key) {
    if(!mp.count(key)){
    return -1;
    }
    
    Node *temp=mp[key];
    if( (temp->prev == nullptr && temp->next ==nullptr) || (temp->prev == nullptr && temp->next!=nullptr)){
    return temp->val;  
    }
    else if(temp->prev != nullptr && temp->next ==nullptr){
    Node *temp2;
    temp2=temp->prev;
    temp2->next=nullptr;
    temp->prev=nullptr;
    temp->next=head;
    head->prev=temp;
    head=temp;
    tail=temp2;
    return temp->val;
    }
    else{
    Node *tempMain,*tempPrev,*tempNext;
    tempMain=mp[key];
    tempPrev=tempMain->prev;
    tempNext=tempMain->next;
    tempPrev->next=tempNext;
    tempNext->prev=tempPrev;
    tempMain->next=head;
    tempMain->prev=nullptr;
    head->prev=tempMain;
    head=tempMain;
    return temp->val;

    }         
    }
    
    void put(int key, int value) {
    if(!mp.count(key)){
    Node *newnode = new Node();
    newnode->val=value;
    newnode->next=nullptr;
    newnode->prev=nullptr;
    newnode->key=key;
    if(head==nullptr){
        tail=newnode;
        head=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    } 
    mp[key]=newnode;
    }
    else{
    Node *temp=mp[key];
    if( (temp->prev == nullptr && temp->next ==nullptr) || (temp->prev == nullptr && temp->next!=nullptr)){
    temp->val=value;    
    }
    else if(temp->prev != nullptr && temp->next ==nullptr){
    Node *temp2;
    temp->val=value; 
    temp2=temp->prev;
    temp2->next=nullptr;
    temp->prev=nullptr;
    temp->next=head;
    head->prev=temp;
    head=temp;
    tail=temp2;
    }
    else{
    Node *tempMain,*tempPrev,*tempNext;
    temp->val=value; 
    tempMain=mp[key];
    tempPrev=tempMain->prev;
    tempNext=tempMain->next;
    tempPrev->next=tempNext;
    tempNext->prev=tempPrev;
    tempMain->next=head;
    tempMain->prev=nullptr;
    head->prev=tempMain;
    head=tempMain;
    
    }    
    }
    if(mp.size()>len){
    Node *tempTail=tail;
    if(tempTail->prev==nullptr && tempTail->next ==nullptr){
     mp.erase(tempTail->key);
     head=nullptr;
     tail=nullptr;
     delete tempTail;   
    }
    else{
     Node *tempPrev;
     mp.erase(tempTail->key);
     tempPrev=tempTail->prev;
     tempPrev->next=nullptr;
     tail=tempPrev;
     delete tempTail;   
    }    
    }    
    }
};
