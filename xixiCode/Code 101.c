/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/

bool Symmetric(struct TreeNode *node1, struct TreeNode *node2) {
	if (node1 == NULL&&node2 == NULL)return true;
	if (node1 == NULL || node2 == NULL)return false;
	if (node1->val != node2->val) return false;
	if (Symmetric(node1->left, node2->right) && Symmetric(node1->right, node2->left))
		return true;
	else
		return false;
}
bool isSymmetric(struct TreeNode *root) {
	if (root == NULL)return true;
	if (Symmetric(root->left, root->right))return true;
	else return false;
}