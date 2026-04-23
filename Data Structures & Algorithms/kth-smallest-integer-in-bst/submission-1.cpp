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
    vector<int>v;
    int small(TreeNode *root,int k){
      if(root==nullptr){
        return 0;
      }
      small(root->left,k);
      v.push_back(root->val);
      small(root->right,k);
      return 0;  
    }
    int kthSmallest(TreeNode* root, int k) {
      small (root,k);  
      return v[k-1];  
    }
};
