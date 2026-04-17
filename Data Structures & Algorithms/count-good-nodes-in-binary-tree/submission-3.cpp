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
    int count=0;
    int nodesFinding(TreeNode *root,int value){
     if(root==nullptr){
        return 0;
     }
     if(value<=root->val){
      count++;
      value=root->val;  
     }
     nodesFinding(root->left,value);
     nodesFinding(root->right,value);
     return count;   
    }

    int goodNodes(TreeNode* root) {
     int value=root->val;
     return nodesFinding(root,value);   
    }
};
