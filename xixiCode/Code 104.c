/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
  * };
 */
int maxDepth(struct TreeNode *root) {
    int m,n;
    if(!root)return 0;
    m=maxDepth(root->left)+1;
    n=maxDepth(root->right)+1;
    return m>n?m:n;
}