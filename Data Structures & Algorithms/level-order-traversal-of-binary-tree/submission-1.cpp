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

class Solution {
public:
    vector<vector<int>>BFS(TreeNode *root){
     vector<vector<int>>v2;
    if(root==nullptr){
        return v2;
    }    
    queue<TreeNode*>q;
    vector<int>v;
   
    q.push(root);
    q.push(nullptr);
    v.push_back(root->val);
    v2.push_back(v); 
    v.clear();  
    while(!q.empty()){
    TreeNode *temp = q.front();
    q.pop();
    if(temp==nullptr){
    if(q.empty()){
        break;
    }
    v2.push_back(v);
    v.clear();
    q.push(nullptr);
    }else{  
      if(temp->left!=nullptr){
        q.push(temp->left);
        v.push_back(temp->left->val);   
     }
     if(temp->right!=nullptr){
        q.push(temp->right);
         v.push_back(temp->right->val);   
     }
    }
        
    }    
    return v2;
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
     return    BFS(root);
    }
};
