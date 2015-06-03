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
		 if (n == 0)return NULL;//����������ΧΪ0
		 TreeNode *root = new TreeNode(0);
		 int inrange = 0;
		 root->val = *preorder;
		 for (inrange = 0; inorder[inrange] != root->val; inrange++);//rootindexΪ�ýڵ������������λ��,rootindex�ض�����
		 root->left = inrange == 0 ? NULL : build(preorder + 1, inorder, inrange);//ǰ��������ʼλ�ã�����������ʼλ�ã�����������Χ
		 root->right = inrange == n - 1 ? NULL : build(preorder + inrange + 1, inorder + inrange + 1, n - inrange - 1);
		 return root;//��������
	 }
	 TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		 return 	build(preorder.begin(), inorder.begin(), inorder.size());
	 }
 };