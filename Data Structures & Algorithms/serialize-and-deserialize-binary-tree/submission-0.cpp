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

class Codec {
public:
    string path="";
    string DFS(TreeNode *root){
        if(root==nullptr){
        path+="-1+"; 
        return path;   
        }
        else
        {
        path+=to_string(root->val) + "+";
        }
        DFS(root->left);
        DFS(root->right);
        return path;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        return DFS(root);
    }
    int i=-1;
    TreeNode* buildTree(vector<int>&v) {
    i++;
    if (v[i]==-1) {
        return nullptr;
    };

    TreeNode* root = new TreeNode(v[i]);
    root->left = buildTree(v);
    root->right = buildTree(v);
    return root;
  }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
    string ans="";
    vector<int>v;
    for(int i=0;i<data.size();i++){
       
        if(data[i]=='+'){
        v.push_back(stoi(ans));
        ans="";    
        }
        else{
        ans+=data[i];
        }
    }
    TreeNode *root;
    root=buildTree(v); 
    return root;     
    }
};
