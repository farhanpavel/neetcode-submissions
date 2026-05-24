/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
    queue<Node*>q;
    if(node==nullptr) return nullptr;
    q.push(node);
    map<Node*,Node*>mp;
    Node *head=nullptr;
    Node *newnode = new Node(node->val);
    head=newnode;
    mp[node]=newnode;
    
    while(!q.empty()){
    Node *temp = q.front();
    if(temp==nullptr) break;
    q.pop();
    for(Node* n : temp->neighbors){
    if(mp.find(n)==mp.end()){
    Node *newnode = new Node(n->val);
    q.push(n);
    mp[n]=newnode;       
    }
    mp[temp]->neighbors.push_back(mp[n]);
    }     
    }    
    return head;
    }
};
