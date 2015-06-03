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
	 TreeNode*	build(vector<int>::iterator preorder, vector<int>::iterator inorder, int n){
		 if (n == 0)return NULL;//中序搜索范围为0
		 TreeNode *root = new TreeNode(0);
		 int inrange = 0;
		 root->val = *preorder;
		 for (inrange = 0; inorder[inrange] != root->val; inrange++);//rootindex为该节点在中序遍历的位置,rootindex必定存在
		 root->left = inrange == 0 ? NULL : build(preorder + 1, inorder, inrange);//前序搜索初始位置，中序搜索初始位置，中序搜索范围
		 root->right = inrange == n - 1 ? NULL : build(preorder + inrange + 1, inorder + inrange + 1, n - inrange - 1);
		 return root;//连接作用
	 }
	 TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		 return 	build(preorder.begin(), inorder.begin(), inorder.size());
	 }
 };