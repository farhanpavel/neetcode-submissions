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
  bool ans=true;
    int balanceCheck(TreeNode *root){
     if(root == nullptr){
        return 0;
     } 

     int lefty = balanceCheck(root->left);
     int righty = balanceCheck(root->right);
     if(abs(righty-lefty)>1){
     ans=false;
     }
     return max(lefty,righty)+1;                                        
    }
    bool isBalanced(TreeNode* root) {
      balanceCheck(root);
      return ans;  
    }
};
