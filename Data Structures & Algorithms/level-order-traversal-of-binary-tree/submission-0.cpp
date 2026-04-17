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
    vector<vector<int>> BFS(TreeNode* root){
     vector<vector<int>>v;
     vector<int>ans;
     if(root==nullptr){
      return v;
     }
     queue<TreeNode*>q;
     q.push(root);
     q.push(nullptr);
     while(!q.empty()){
      TreeNode *temp=q.front();
      q.pop();
      if(temp == nullptr){
       v.push_back(ans);
       ans.clear();
       if(q.empty()){
        break;
       }
       q.push(nullptr);
      }
      else{
        ans.push_back(temp->val);
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
      }
     } 
  return v;

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
      return BFS(root);  
    }
};
