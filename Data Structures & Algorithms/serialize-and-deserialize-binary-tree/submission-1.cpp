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
    string ans="";
    string dfs(TreeNode *root){
     if(root==nullptr){
       ans+=("/");  
       return "";
     }
     ans+=(to_string(root->val)+"#");
     dfs(root->left);
     dfs(root->right);
     return ans;
    }


    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
     return dfs(root);   
    }
    TreeNode *createTree(vector<int>&v,int &i){
    i++; 
    if(i>=v.size() || v[i]==INT_MAX ){
     return nullptr;   
    }
    TreeNode *root=new TreeNode(v[i]);
    root->left=createTree(v,i);
    root->right=createTree(v,i);
    return root;

    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
    string ans=data,ans2="";
    vector<int>v;
    for(int i=0;i<ans.size();i++){
    if(ans[i]!='#' && ans[i]!='/'){
    ans2+=ans[i];    
    }
    else if(ans[i]=='/'){
    v.push_back(INT_MAX);
    ans2="";
    }
    else{
    v.push_back(stoi(ans2));  
    ans2=""; 
    }
    }
    int i=-1;
    TreeNode *root=createTree(v,i);
    if(root==nullptr){
    return nullptr;
    }
    return root;
    }
};
