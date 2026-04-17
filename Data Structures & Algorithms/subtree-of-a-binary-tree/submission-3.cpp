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
    bool isIdentical (TreeNode *root,TreeNode *subRoot){
      if(root==nullptr && subRoot ==nullptr){
        return true;
      }
      if(root==nullptr || subRoot ==nullptr){
        return false;
      }
      if(root->val == subRoot->val){
       return (isIdentical(root->left,subRoot->left)&& isIdentical(root->right,subRoot->right)); 
      } 
      return false; 
    }

    bool subtree (TreeNode *root,TreeNode *subRoot){
        if(subRoot==nullptr){
            return true;
        }
        if(root == nullptr){
            return false;
        }
        if(root->val == subRoot->val){
           if(isIdentical(root,subRoot)){
           return true; 
           } 
        }
        return subtree(root->left,subRoot) || subtree(root->right,subRoot);
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return subtree(root,subRoot);
    }
};
