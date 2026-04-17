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
    int value=0;
    int Balanced ( TreeNode *root){
     if(!root) return false;
     int lefty=Balanced(root->left);
     int righty=Balanced(root->right);
     value=max(value,abs(lefty-righty));     
     return max(lefty,righty)+1;

    }

    bool isBalanced(TreeNode* root) {
     Balanced(root);
     if(value>1){
        return false;
     }
     return true;   
    }
};
