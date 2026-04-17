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
int count=1;
    int Count (TreeNode * root,int value){
        if(root==nullptr){
           return 0;
        }
        value=max(value,root->val);
        if(root->left && value<=root->left->val){
            count++;
        }
        if(root->right && value<=root->right->val){
            count++;
        }
        Count(root->left,value);
        Count(root->right,value);
        return count;

    }
    int goodNodes(TreeNode* root) {
       int value=INT_MIN;
       count=1;
        return Count(root,value);
    }
};
