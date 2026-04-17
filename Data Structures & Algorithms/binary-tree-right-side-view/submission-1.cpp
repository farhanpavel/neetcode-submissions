/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
vector<int>BFS(TreeNode *root){
vector<int>v;
if(root==nullptr){
    return v;
}
queue<TreeNode *>q;
q.push(root);
q.push(nullptr);
while(!q.empty()){
 TreeNode *temp=q.front();
 q.pop();
 TreeNode *temp2=q.front();
 if(temp2==nullptr){
  if(temp)  
  v.push_back(temp->val);  
 }
 if(temp==nullptr){
    if(q.empty()){
        break;
    }
    q.push(nullptr);
 }else{
   if(temp->left!=nullptr){
   q.push(temp->left); 
   }
   if(temp->right!=nullptr){
   q.push(temp->right); 
   }
 }   
}
return v;    
}
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      return BFS(root);  
    }
};
