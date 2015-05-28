/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != NULL){
            inorderTraversal(root->left);
            res.push_back(root->val);
            inorderTraversal(root->right);
        }
        return res;
    }
};


class Solution {
public:
  vector<int> res;
  stack<TreeNode*> node;
    vector<int> inorderTraversal(TreeNode* root) {
          while(root!=NULL||!node.empty()){
            if(root==NULL){
              root=node.top();node.pop();
              res.push_back(root->val);
             root = root->right;
            }
            else{
            node.push(root);
            root=root->left;
            }
          }
        return res;
          }
};

