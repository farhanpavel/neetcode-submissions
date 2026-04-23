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
int maxVal=INT_MIN;
    int pathSum(TreeNode *root){
      if(root==nullptr){
        return 0;
      }  
        int lefty = pathSum(root->left);
        int righty = pathSum(root->right);
        lefty=max(lefty,0);
        righty=max(righty,0);
        
        maxVal=max(maxVal,(root->val + lefty + righty));
       // root->val=max(0,root->val); 
        return root->val + max(lefty ,righty);
    }
    int maxPathSum(TreeNode* root) {
         pathSum(root);
         return maxVal;
    }
};
