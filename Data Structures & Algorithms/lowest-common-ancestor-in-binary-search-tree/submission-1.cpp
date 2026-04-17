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

    TreeNode * ancestors(TreeNode *root,TreeNode *p,TreeNode *q){
      if((p->val > root->val && q->val < root->val) || 
      (q->val > root->val && p->val < root->val)){
        return root;
      }
      if(root->val > p ->val && root->val >q->val){
       return ancestors(root->left,p,q); 
      }    
      if(root->val < p ->val && root->val < q->val){
       return ancestors(root->right,p,q); 
      }   
      return root;
    }


    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      TreeNode * temp;
      temp=ancestors(root,p,q) ;
      return temp; 
    }
};
