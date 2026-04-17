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
  int value=0,value2=0;
    int Dfs (TreeNode *root){
        if(!root){
            return 0;
        }
     int lefty=Dfs(root->left);
     int righty=Dfs(root->right);
     value=max(value,lefty+righty);
     return max(lefty,righty)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
    Dfs(root);
     return value;
    }
};
