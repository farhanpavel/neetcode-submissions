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
int count=0;
public:
    int Ans(TreeNode *root, int k){
     if(root==nullptr){
        return 0;
     }
    
     
    int ansLeft= Ans(root->left,k);
    if(ansLeft!=0) return ansLeft;
    count++;
     if(count==k){
        return root->val;
     }
    int ansRight= Ans(root->right,k);
    if(ansRight!=0) return ansRight;
    return 0;
    }

    int kthSmallest(TreeNode* root, int k) {
    return Ans(root,k);        
    }
};
