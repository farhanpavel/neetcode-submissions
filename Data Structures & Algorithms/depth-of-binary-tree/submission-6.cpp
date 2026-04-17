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
   int ans=INT_MIN,leftCount=0,rightCount=0; 
    int depth (TreeNode *root){
    if (root==nullptr){
        return 0;
    }    
    int lefty=depth(root->left);
    int righty=depth(root->right);
    return max(lefty,righty)+1;
    }
    int maxDepth(TreeNode* root) {
    return depth(root);

    
    }
};
