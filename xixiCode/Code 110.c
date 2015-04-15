/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
int depth(struct TreeNode *root) {
	int m, n;
	if (!root)return 0;
	m = depth(root->left) + 1;
	n = depth(root->right) + 1;
	return m>n ? m : n;
}

bool isBalanced(struct TreeNode *root) {
	int d;
	if (!root)return true;
	d = depth(root->left) - depth(root->right);
	if (d > 1 || d < -1)return false;
	else
		if (isBalanced(root->left) && isBalanced(root->right))
			return true;
		else return false;
}