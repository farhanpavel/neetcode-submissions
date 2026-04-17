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
vector<int>BFS(TreeNode *root){
vector<int>v;
if(root == nullptr){
    return v;
}
queue<TreeNode *>q;
q.push(root);
q.push(nullptr);
while(!q.empty()){
    TreeNode *temp=q.front();
    q.pop();
    if(temp==nullptr){
        if(q.empty()) break;
        q.push(nullptr);
      
    }
    else{
        if(q.front()==nullptr){
            v.push_back(temp->val);
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
return v;
}
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        return BFS(root);
    }
};
