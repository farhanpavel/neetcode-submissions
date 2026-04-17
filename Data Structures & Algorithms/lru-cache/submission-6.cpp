struct Node {
    int key;
    int data;
    Node* next;
    Node* prev;
};

class LRUCache {
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    Node *temp;
    map<int, Node*> mp;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
      if(!mp.count(key)){
        return -1;
      }
      moveToHead(mp[key]);
      Node *temp1;
      temp1=mp[key];
      return temp1->data;
    }
    void moveToHead(Node *node){
        if(node == head) return;
      Node *newnode;
      newnode=node;  
     
      if(newnode == tail){
      Node *temp1;
     
      if(tail!=head){
      Node *prevNode;
      prevNode=tail->prev;
      prevNode->next=nullptr;
      tail->prev=nullptr;
      tail->next=head;
      head->prev=tail;
      head=tail;
      tail=prevNode;
      }
        
      }
      else{
        newnode->prev->next=newnode->next;
        newnode->next->prev=newnode->prev;
        newnode->prev=nullptr;
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
      } 
    }
    void put(int key, int value) {
     if(!mp.count(key)){
     Node *newnode = new Node ();
     newnode->data=value;
     newnode->key=key;
     newnode->next=nullptr;
     newnode->prev=nullptr;
     if(head==nullptr){
        head=newnode;
        tail=newnode;
     }
     else{
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
     }
     if(tail==nullptr){
        tail=newnode;
     }
     mp[key]=newnode;
     }
     else{
      mp[key]->data=value;
      moveToHead(mp[key]);
     } 
     if(mp.size()>cap){
        Node *temp1;
        if(tail->prev){
             temp1=tail->prev;
       
        }
        else{
            temp1=nullptr;
        }
        mp.erase(tail->key);
        delete tail;
        tail=temp1;
     }

    }
};