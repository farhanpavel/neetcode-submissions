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
    int diameter(TreeNode *root){
       if(root==nullptr){
        return 0;
       } 

     int lefty=diameter(root->left);
     int righty=diameter(root->right);
     maxVal=max(maxVal,lefty+righty);
     return max(lefty,righty)+1;   

    }
    int diameterOfBinaryTree(TreeNode* root) {
      diameter(root);
      return maxVal;  
    }
};
