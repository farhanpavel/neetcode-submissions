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
    bool check=true;
    void sameCheck(TreeNode *root1,TreeNode *root2){
        if(!check) return ;
        if(!root1 && !root2){
            check = true;
            return;
        }
        if((root1 && !root2) || (!root1 && root2) || root1->val!=root2->val){
           check=false;
           return;
        }
        sameCheck(root1->left,root2->left);
        sameCheck(root1->right,root2->right); 
       
    }


    bool isSameTree(TreeNode* p, TreeNode* q) {
       sameCheck(p,q);
       return check;
    }
};
