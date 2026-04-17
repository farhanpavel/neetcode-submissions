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
    TreeNode *ancestorCheck(TreeNode *root,TreeNode *p,TreeNode *q){
    if(root==nullptr){
     return nullptr;   
    }
    
    if((root->val>=p->val && root->val <=q->val)
    ||(root->val>=q->val && root->val <=p->val))
    {
      return root;  
    }
    if((root->left!=nullptr && root->right!=nullptr && root->left->val == p->val && root->right->val == q->val )||
    (root->left!=nullptr && root->right!=nullptr && root->left->val ==q->val && root->right->val == p->val )){
    return root;    
    }
    if(root->val == p->val || root->val == q->val ) 
    {
    return root;
    }
   TreeNode *lefty =  ancestorCheck(root->left,p,q);
   if(lefty!=nullptr){return lefty;}
   TreeNode *righty =  ancestorCheck(root->right,p,q);
    if(righty!=nullptr){return righty;}
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    return ancestorCheck(root,p,q);    
    }
};
