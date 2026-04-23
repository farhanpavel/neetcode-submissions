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

    int findIdx(vector<int>& inorder,int value , int left,int right){
     for(int i=left;i<=right;i++){
        if(inorder[i]==value){
            return i;
        }
     } 
     return -1;  
    }
    TreeNode * helper(vector<int>& preorder, vector<int>& inorder,int &preIdx,int left,int right){
    if(left>right){
        return nullptr;
    }
    int rootValue=preorder[preIdx];
    TreeNode *root = new TreeNode(rootValue);
    preIdx++;
    int idx=findIdx(inorder,rootValue,left,right); 
    root->left=helper(preorder, inorder,preIdx,left,idx-1);
    root->right=helper(preorder, inorder,preIdx,idx+1,right);
    return root;     
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     int preIdx=0;
     return helper(preorder,inorder,preIdx,0,preorder.size()-1);   
    }
};
