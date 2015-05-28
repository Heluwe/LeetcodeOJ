/**
* Definition for binary tree with next pointer.
* struct TreeLinkNode {
*  int val;
*  TreeLinkNode *left, *right, *next;
*  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
* };
*/
class Solution {
public:
	void connect(TreeLinkNode *root) {
		queue<TreeLinkNode*> q;
		TreeLinkNode *tmp;
		if (root) {
			q.push(root); root->next = NULL;
		}
		while (!q.empty()) {
			int len = q.size();
			while (len--) {
				root = q.front(); q.pop();
				if (root->left) {
					q.push(root->left); q.push(root->right);
					root->left->next = root->right;
					if (root->next)root->right->next = root->next->left;
				}
			}
		}
	}
};