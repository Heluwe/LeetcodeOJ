/**************recursion*****************/
class Solution {
public:
	vetor <int> res;
	vector<int> preorderTraversal(TreeNode* root) {
		if (root != NULL) {
			res.push_back(root->val);
			preorderTraversal(root->left);
			preorderTraversal(root->right);
		}
		return res;
	}
};

/***********none-recursion************/
class Solution {
public:
	vector <int> res;
	stack <TreeNode*> node;
	vector<int> preorderTraversal(TreeNode* root) {
		while (root != NULL || !node.empty()) {
			if (root == NULL) { root = node.top(); node.pop(); }
			res.push_back(root->val);
			if (root->right != NULL)
				node.push(root->right);
			root = root->left;
		}
		return res;
	}
};