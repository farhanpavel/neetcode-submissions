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
    bool sameTree(TreeNode *p , TreeNode *q){
     if(p==nullptr && q==nullptr){
        return true;
     }
     if(p==nullptr || q==nullptr){
        return false;
     }
    
    bool lefty= sameTree(p->left,q->left);
    bool righty= sameTree(p->right,q->right);
    if(p->val!=q->val){
        return false;
    }
    return lefty && righty;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
     return sameTree(p,q);   
    }
};
