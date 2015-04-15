/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/

bool hasPathSum(struct TreeNode *root, int sum){
	if (!root) return false;
	if (sum - root->val == 0 && !root->left&&!root->right)
		return true;
	if (hasPathSum(root->left, sum - root->val))return true;
	if (hasPathSum(root->right, sum - root->val))return true;
}