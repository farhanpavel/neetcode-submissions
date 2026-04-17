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
    int Dfs (TreeNode *root){
        if(!root){
            return 0;
        }
     int lefty=Dfs(root->left);
     int righty=Dfs(root->right);   
     value=max(lefty+1,righty+1);
     return value;   
    }

    int maxDepth(TreeNode* root) {
     int ans=Dfs(root);
     return ans;   
    }
};
