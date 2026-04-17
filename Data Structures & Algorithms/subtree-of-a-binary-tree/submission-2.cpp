/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() :  val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isIdentical(TreeNode *root,TreeNode *subroot){
        if(root==nullptr && subroot==nullptr) return true;
        if(root==nullptr || subroot==nullptr) return false;
        if(root->val==subroot->val){
        return 
        (isIdentical(root->left,subroot->left)) &&
        (isIdentical(root->right,subroot->right)) ;   
        } 
        return false;
        }
    

    bool isSimilar(TreeNode *root,TreeNode *subroot){
        if(subroot==nullptr){
           return true;
        }
        if(root == nullptr){
            return false;
        } 
        if(root->val==subroot->val){
        if(isIdentical(root,subroot)){
            return true;
        }
        }
        return 
        (isSimilar(root->left,subroot)) ||
        (isSimilar(root->right,subroot));     
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans= isSimilar(root,subRoot);
        return ans;
    }
};
