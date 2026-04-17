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
    // TreeNode * Depth(TreeNode * root){
    //     if(root==nullptr){
    //         return nullptr;
    //     }


    // }
    int Bfs(TreeNode *root){
        int count=0;
        if(root==nullptr){
            return 0;
        }
        queue<TreeNode *>q;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            TreeNode *temp=q.front();
            q.pop();
            
            if(temp==nullptr){
              count++;  
              if(q.empty()){
                break;
              }  
              else{
                q.push(nullptr);
              }
            }
            else{
              
              if(temp->left!=nullptr){
                q.push(temp->left);
              }
              if(temp->right!=nullptr){
                q.push(temp->right);
              }  
            }
        }
        return count;
    }

    int maxDepth(TreeNode* root) {
     int ans=Bfs(root);
     return ans;
    }
};
